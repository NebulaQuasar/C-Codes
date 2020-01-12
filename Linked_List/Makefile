# The compiler: 
# For C define  CC = g++
CC = gcc
  
# For C++ define
# CC = g++

# Compiler Flags:
# -g    adds debugging information to the executable file
# -Wall turns on most, but not all, compiler warnings
CFLAGS  = -g -Wall

all: Test

Test: Linked_List.o Test_Example.o
	$(CC) $(CFLAGS) -o Test Linked_List.o Test_Example.o

Linked_List.o: Linked_List.c Linked_List.h
	$(CC) $(CFLAGS) -c Linked_List.c

Test_Example.o: Test_Example.c Linked_List.h
	$(CC) $(CFLAGS) -c Test_Example.c

.PHONY: clean

clean:
	$(RM) Test *.o *~