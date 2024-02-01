# quick and dirty makefile
# 24 Dec 2016

CC = g++
FL = -std=c++11 -ggdb
EXEC = factory
SRC = "src/"

all:
	$(CC) $(FL) $(SRC)*.cpp -o $(EXEC)

run: all
	./$(EXEC)

clean:
	rm -f $(EXEC)
