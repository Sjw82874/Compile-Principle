all: task2_3

task2_3: parser.tab.o scanner.o
	     gcc -o $@ parser.tab.o scanner.o -lm
	     ./task2_3

scanner.o: scanner.c parser.tab.h

parser.tab.c parser.tab.h: parser.y parser.h
	bison -vd parser.y

scanner.c: scanner.l
	flex -o $@ scanner.l

clean:
	-@ rm parser.tab.c parser.tab.h scanner.c parser.output *.o out.txt
