CC = g++
INC = ./inc
OBJ = ./obj
SRC = ./src
BIN = ./bin
DATA= ./data

CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
IFLAGS = -I$(INC)
CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: $(BIN)/app valgrind

$(BIN)/app: $(OBJ)/main.o $(OBJ)/sysprg.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/main.o $(OBJ)/sysprg.o


$(OBJ)/main.o:$(SRC)/main.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/main.cpp
	mv *.o $(OBJ)

$(OBJ)/sysprg.o:$(SRC)/sysprg.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/sysprg.cpp
	mv *.o $(OBJ)

clean:
	@echo "Cleaning the Test file"
	rm -f $(OBJ)/*.o
	rm -f a.out
	rm -f $(BIN)/app
	@echo "Done!"



valgrind:
	valgrind --leak-check=full $(BIN)/app
	mv valgrind $(BIN)
