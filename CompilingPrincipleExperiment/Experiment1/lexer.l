%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
%}

letter [a-zA-Z]
number [0-9]
number_9 [1-9]
number_8 [0-7]
number_16 [a-f0-9]
IDN1 {letter}({letter}|{number})*
IDN2 {letter}({letter}|{number})*(_|\.)({letter}|{number})+
INT10 0|{number_9}{number}*
REAL10 (0|{number_9}{number}*)\.{number}+
INT8 0{number_8}+
REAL8 0{number_8}+\.{number_8}+
INT16 0x{number_16}+
REAL16 0x{number_16}+\.{number_16}+

%%
 /*
 IF 15   THEN 29   ELSE 9   WHILE 34   DO 7
 IDN 36   INT 37   REAL 38
 + 40   - 41   * 42   / 43   > 46   < 45   = 44   ( 50   ) 51   ; 58
 */
"if" fprintf(yyout,"IF _\n");
"then" fprintf(yyout,"THEN _\n");
"else" fprintf(yyout,"ELSE _\n");
"while" fprintf(yyout,"WHILE _\n");
"do" fprintf(yyout,"DO _\n");
{IDN1} fprintf(yyout,"IDN %s\n",yytext);
{IDN2} fprintf(yyout,"IDN %s\n",yytext);
{INT10} fprintf(yyout,"INT10 %s\n",yytext);
{REAL10} fprintf(yyout,"REAL10 %s\n",yytext);
{INT8} {int num8 = strtol(yytext,NULL,8);
        fprintf(yyout,"INT8 %d\n",num8);}
{REAL8} {double real8 = strtod(yytext,NULL);
         fprintf(yyout,"REAL8 %g\n",real8);}
{INT16} {int num16 = strtol(yytext,NULL,16);
         fprintf(yyout,"INT16 %d\n",num16);}
{REAL16} {double real16 = strtod(yytext,NULL);
          fprintf(yyout,"REAL16 %g\n",real16);}
"+" fprintf(yyout,"+ _\n");
"-" fprintf(yyout,"- _\n");
"*" fprintf(yyout,"* _\n");
"/" fprintf(yyout,"/ _\n");
">" fprintf(yyout,"> _\n");
"<" fprintf(yyout,"< _\n");
"=" fprintf(yyout,"= _\n");
"(" fprintf(yyout,"( _\n");
")" fprintf(yyout,") _\n");
";" fprintf(yyout,"; _\n");
[ \t\n] {}
. {}

%%

int main(int argc,char** argv)
{
    FILE* infile=fopen("in.txt","r");
    FILE* outfile=fopen("out.txt","w");
    yyin=infile;
    yyout=outfile;
    yylex();
    fclose(infile);
    fclose(outfile);
    yywrap();
}
int yywrap()
{
    return 1;
}