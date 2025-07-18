#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct listNode {
    struct listNode *next;
    int quad;
};

struct listNode* makelist(int quad){
    struct listNode* node = (struct listNode*)malloc(sizeof(struct listNode));
    node -> quad = quad;
    return node;
}

struct listNode* merge(struct listNode* l1,struct listNode* l2){
    struct listNode* l=(struct listNode*)malloc(sizeof(struct listNode));
    struct listNode* now=l;
    while(l1){
        struct listNode* tmp = makelist(l1->quad);
        now->next=tmp;
        now=tmp;
        l1=l1->next;
    }
    while(l2){
        struct listNode* tmp = makelist(l2->quad);
        now->next=tmp;
        now=tmp;
        l2=l2->next;
    }
    return l->next;
}


struct astNode {
    int pattern;

    double num;//INT
    char idn[20];//IDN

    int t;//temp variable
    int quad;//not used (but i want to use it in IFTHENELSE)

    struct listNode *truelist;
    struct listNode *falselist;
    struct listNode *nextlist;

    struct astNode *l;
    struct astNode *m;
    struct astNode *r;

    char relop;//> < =
    int type;//0:idn 1:num 5:t 6:quad 10:list
};

char* getPrintPattern(int type) {
    char *s;
    s = (char*)malloc(30);
    if (type == 1) strcpy(s, "P -> L");
    else if (type == 2) strcpy(s, "P -> LP");
    else if (type == 3) strcpy(s, "L -> S;");
    else if (type == 4) strcpy(s, "S -> id = E     id = ");
    else if (type == 5) strcpy(s, "S -> if C then S'");
    else if (type == 6) strcpy(s, "S -> while C do S");
    else if (type == 7) strcpy(s, "S -> {P}");
    else if (type == 8) strcpy(s, "S' -> S");
    else if (type == 9) strcpy(s, "S' -> S else S");
    else if (type == 10) strcpy(s, "C -> EC'");
    else if (type == 11) strcpy(s, "C' -> > E");
    else if (type == 12) strcpy(s, "C' -> < E");
    else if (type == 13) strcpy(s, "C' -> = E");
    else if (type == 14) strcpy(s, "E -> T");
    else if (type == 15) strcpy(s, "E -> E + T");
    else if (type == 16) strcpy(s, "E -> E - T");
    else if (type == 17) strcpy(s, "T -> F");
    else if (type == 18) strcpy(s, "T -> T * F");
    else if (type == 19) strcpy(s, "T -> T / F");
    else if (type == 20) strcpy(s, "F -> ( E )");
    else if (type == 21) strcpy(s, "F -> id     id = ");
    else if (type == 22) strcpy(s, "F -> int8     int8 = ");
    else if (type == 23) strcpy(s, "F -> int10     int10 = ");
    else if (type == 24) strcpy(s, "F -> int16     int16 = ");
    else if (type == 25) strcpy(s, "F -> float8     float8 = ");
    else if (type == 26) strcpy(s, "F -> float10     float10 = ");
    else if (type == 27) strcpy(s, "F -> float16     float16 = ");
    else strcpy(s, "UNDEFINED");
    return s;
}

struct astNode *createNum(int pattern, double num) {
    struct astNode *n;
    n = (struct astNode*)malloc(sizeof(struct astNode));
    n -> pattern = pattern;
    n -> num = num;
    n -> type = 1;
    memset(n -> idn, 0, sizeof(n -> idn));
    n -> l = NULL;
    n -> m = NULL;
    n -> r = NULL;
    return n;
}

struct astNode *createIdn(int pattern, char *idn) {
    struct astNode *n;
    n = (struct astNode *) malloc(sizeof(struct astNode));
    n -> pattern = pattern;
    strcpy(n -> idn, idn);
    n -> type = 0;
    n -> l = NULL;
    n -> m = NULL;
    n -> r = NULL;
    return n;
}

struct astNode *createAstNode(int pattern, struct astNode *l, struct astNode *m, struct astNode *r) {
    struct astNode *n;
    n = (struct astNode*)malloc(sizeof(struct astNode));
    n -> pattern = pattern;
    n -> num = -1;
    memset(n -> idn, 0, sizeof(n -> idn));
    if(m!=NULL){
        //the parent node should use children's attribute
        n -> num = m -> num;
        n -> type = m -> type;
        n -> t = m -> t;
        strcpy(n -> idn, m -> idn);
    }
    n -> l = l;
    n -> m = m;
    n -> r = r;
    return n;
}

struct astNode *createAstNodeIdn(int pattern, char *idn, struct astNode *l, struct astNode *m, struct astNode *r) {
    struct astNode *n;
    n = (struct astNode*) malloc(sizeof(struct astNode));
    n -> pattern = pattern;
    n -> num = m -> num;
    n -> type = 0;
    n -> t = m -> t;
    n -> l = l;
    n -> m = m;
    n -> r = r;
    strcpy(n -> idn, idn);
    return n;

}

void printTree(struct astNode* root, FILE* f) {
    if (root == NULL) return;
    char* pattern = getPrintPattern(root -> pattern);
    fprintf(f, "%s", pattern);
    if (root -> pattern >= 22 && root -> pattern <= 24) fprintf(f, "%d", (int)root -> num);
    if (root -> pattern >= 25 && root -> pattern <= 27) fprintf(f, "%f", root -> num);
    if ((root -> pattern == 4 || root -> pattern == 21) && strlen(root -> idn) > 0) fprintf(f, "%s", root -> idn);
    fprintf(f, "\n");

    if (root -> l != NULL)
        printTree(root -> l, f);
    if (root -> m != NULL)
        printTree(root -> m, f);
    if (root -> r != NULL)
        printTree(root -> r, f);
}


