EXE = strcmp
PROGS = main.c

all: clean
	@gcc -o ${EXE} main.c

clean:
	@rm -f ${EXE}

test: all
	@echo "====Tests===="
	./${EXE} aaa aac
	./${EXE} aaa aabc
	./${EXE} 你好啊 你啊好
