# quick and dirty makefile
# 24 Dec 2016

CC = g++
FL = -std=c++11 -ggdb

EXEC = factory

all:
	$(CC) $(FL) *.h *.cpp -o $(EXEC)

clean:
	rm $(EXEC)
