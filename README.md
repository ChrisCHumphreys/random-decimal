Project:
float-genereater

Contact:
Chris Humphreys
geochris35@gmail.com

Description:
This is a quick and dirty little program that creates a file full of
random numbers.  These numbers are all in the format XX.XX.

Assumptions:
It is assumed that the user is familiar with command line programs in
a unix type environment and that they are comfortable with super basic
c++ compilation.

Files Required:
Makefile
float-generator.cpp

Usage:
To compile just type `make` at command line. To run at linux or mac
command line run `float-generator <output-filename> <count>` where
output filename is whatever you want the final file to be named, there
can be no spaces in output-filename, and count is the number of random
numbers you want in the file.

TODO:
Have a flag which determines the number of decimal places used.  Have
it create a list of integers.
