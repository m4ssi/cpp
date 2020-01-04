CFLAGS=g++ -Wall -g3
DIR= ./obj/
SRC= ./src/
INC= -I./include 

all: obj exe

exe:
	./simulation.exe


#	Ajouter a la suite de "obj:" les methodes de creation des fichiers .o

obj: pompe reservoir moteur vanne avion main
	${CFLAGS} -o simulation.exe $(DIR)*.o

#	Fichiers .o a creer

main: $(./src/main.cpp)
	${CFLAGS} -O3 -c -o $(DIR)main.o $(SRC)main.cpp ${INC}

pompe: $(./src/Pompe.cpp)
	${CFLAGS} -O3 -c -o $(DIR)Pompe.o $(SRC)Pompe.cpp ${INC}

reservoir: $(./src/Reservoir.cpp)
	${CFLAGS} -O3 -c -o $(DIR)Reservoir.o $(SRC)Reservoir.cpp ${INC}
	
moteur: $(./src/Moteur.cpp)
	${CFLAGS} -O3 -c -o $(DIR)Moteur.o $(SRC)Moteur.cpp ${INC}	

vanne: $(./src/Vanne.cpp)
	${CFLAGS} -O3 -c -o $(DIR)Vanne.o $(SRC)Vanne.cpp ${INC}	
	
avion: $(./src/Avion.cpp)
	${CFLAGS} -O3 -c -o $(DIR)Avion.o $(SRC)Avion.cpp ${INC}	
		
#	Fin des fichiers .o a creer 
.PHONY: clean
	
clean:	
	rm -rf simulation.exe $(DIR)*
