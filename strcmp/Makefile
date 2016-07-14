EXE = strcmp
PROGS = main.c

all: clean
	@gcc -o ${EXE} main.c

clean:
	@rm -f ${EXE} ord

ord:
	@gcc -o ord ord.c

ord_test: ord
	./ord
	php ord.php

test: all
	@echo "====strcmp tests begin===="
	./${EXE} aaa aac
	./${EXE} aaa aaac
	./${EXE} aaa aaaccc
	./${EXE} aaa aabc
	./${EXE} aaa aacc
	./${EXE} 你好啊 你啊好
	@echo "====strcmp tests end===="
