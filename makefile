# quick and dirty makefile
# 24 Dec 2016

CC = g++
FL = -std=c++11 -ggdb
EXEC = factory

all:
	$(CC) $(FL) *.cpp -o $(EXEC)

clean:
	rm -f $(EXEC)
