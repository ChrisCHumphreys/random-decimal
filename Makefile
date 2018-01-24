# Date: 01/24/17
# Name: Chris Humphreys
# Description: Makefile for float generator program
# File: Makefile

# Compiler Version
CC=g++

# Debugging Flag
DEBUG=-g

# Target
TARGET=float_generator

# Compile with all errors and warnings
CFLAGS=-c -Wall $(DEBUG)

# Makefile Syntax:
# target: Dependencies
#(tab) system command(s)

all: $(TARGET)

$(TARGET): float_generator.o
	$(CC) float_generator.o -o $(TARGET)

float_generator.o: float_generator.cpp
	$(CC) $(CFLAGS) float_generator.cpp

clean:
	rm *.o
 
