flex project.l
bison -d project.y
gcc lex.yy.c project.tab.c -lfl -ly -o comp.exe
comp.exe exemple.txt