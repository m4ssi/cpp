CFLAGS=g++ -Wall
DIR= ./obj/
SRC= ./src/
INC= -I./include

all: obj exe

exe:
	./simulation


#	Ajouter a la suite de "obj:" les methodes de creation des fichiers .o

obj: pompe main
	${CFLAGS} -o simulation $(DIR)*.o

#	Fichiers .o a creer

main: $(./src/main.cpp)
	${CFLAGS} -O3 -c -o $(DIR)main.o $(SRC)main.cpp ${INC}

pompe: $(./src/Pompe.cpp)
	${CFLAGS} -O3 -c -o $(DIR)Pompe.o $(SRC)Pompe.cpp ${INC}
	
	
#	Fin des fichiers .o a creer 
.PHONY: clean
	
clean:	
	rm -rf simulation $(DIR)*
