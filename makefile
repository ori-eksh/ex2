all: connections

connections: main.o libmymat.a
	gcc -Wall -g -o connections main.o libmymat.a

libmymat.a: my_mat.o my_mat.h
	ar rcs libmymat.a my_mat.o my_mat.h

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c my_mat.h

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c my_mat.h

.PHONY: clean all
clean:
	rm -f *.o *.a connections
