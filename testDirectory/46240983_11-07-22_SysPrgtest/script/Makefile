CC = g++
INC = ./inc
OBJ = ./obj
SRC = ./src
BIN = ./bin

CFLAGS = -c -g -Wall -Werror
LFLAGS = -o
IFLAGS = -I$(INC)
CVFLAGS = -v --tool=memcheck --leak-check=full --show-reachable=yes --log-file=valclient

all: $(BIN)/app valgrind

$(BIN)/app: $(OBJ)/test1.o
	$(CC) $(LFLAGS) $(BIN)/app $(OBJ)/test1.o


$(OBJ)/test1.o:$(SRC)/test1.cpp
	$(CC) $(CFLAGS) $(IFLAGS) $(SRC)/test1.cpp
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
