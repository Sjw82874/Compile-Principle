all: task1

task1: 
	flex -olexer.yy.c lexer.l
	gcc -o lexer lexer.yy.c
	./lexer

clean:
	-@ rm lexer out.txt
