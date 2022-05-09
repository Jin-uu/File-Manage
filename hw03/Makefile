FLT.out: main.o ftl.o devicedriver.out
	gcc -o FLT.out main.o ftl.o devicedriver.out

main.o: main.c blkmap.h
	gcc -c -o main.o main.c

ftl.o: ftl.c blkmap.h
	gcc -c -o ftl.o flt.c

devicedriver.oL: devicedriver.c blkmap.h
	gcc -c -o devicedriver.o devicedriver.c