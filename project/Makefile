CFLAGS=g++ -Wall -g3 -std=c++11
DIR= ./obj/
SRC= ./src/
INC= -I./include 
SDLFLAGS=-O3 `sdl-config --cflags`
LDFLAGS=`sdl-config --libs` -lm -lSDL_ttf

all: obj exe

exe:
	./simulation.exe


#	Ajouter a la suite de "obj:" les methodes de creation des fichiers .o

obj: action pompe reservoir moteur vanne avion interface dashboard bouton image main
	${CFLAGS} -o simulation.exe $(DIR)*.o  ${LDFLAGS} ${SDLFLAGS}

#	Fichiers .o a creer

main: $(./src/main.cpp)
	${CFLAGS} -O3 -c -o $(DIR)main.o $(SRC)main.cpp ${INC}  ${LDFLAGS} ${SDLFLAGS}

action: $(./src/Acion.cpp)
	${CFLAGS} -O3 -c -o $(DIR)Acion.o $(SRC)Action.cpp ${INC}

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

interface:
	${CFLAGS} -c -o $(DIR)Interface.o $(SRC)Interface.cpp ${INC} ${LDFLAGS} ${SDLFLAGS}

dashboard:
	${CFLAGS} -c -o $(DIR)DashBoard.o $(SRC)DashBoard.cpp ${INC} ${LDFLAGS} ${SDLFLAGS}

bouton:
	${CFLAGS} -c -o $(DIR)Bouton.o $(SRC)Bouton.cpp ${INC} ${LDFLAGS} ${SDLFLAGS}

image:
	${CFLAGS} -c -o $(DIR)Boutin.o $(SRC)Image.cpp ${INC} ${LDFLAGS} ${SDLFLAGS}		

#	Fin des fichiers .o a creer 
.PHONY: clean
	
clean:	
	rm -rf simulation.exe $(DIR)*
