/* Date: 01/24/18
 * Name: Chris Humphreys
 * Description: Program that generates a text file that consists of strings
 * 		representing floats.  These are two decimal places long and
 * 		each value is written on a new line.  Command line arguments 
 *		in order are <name of file to be created>, <number of values>.
 * File: float_generator.cpp
 *
 */

#include <iostream> // stdin, stdout
#include <fstream> // ofstream
#include <cstdlib> // atoi
#include <stdlib.h> // srand, rand
#include <time.h> // time

using namespace std;
int randomInt()
{
	int randInt = rand() % 10;
	return randInt;
}

int main(int argc, char* argv[])
{
	// variables
	int numOfLines = 0;

	// check for correct number of arguments
	if (argc != 3) {
		cout << "Error: Incorrect Number of arguments." << endl;
		cout << "Please use the format '.\\float_generator <filename> <number of entries>." << endl;
		return 0;
	}

	// convert command line argument to int
	numOfLines = atoi(argv[2]);

	// initialize random seed
	srand (time(NULL));

	// prepare and open filestream
	ofstream outStream;
	outStream.open(argv[1]);

	for (int i = 0; i < numOfLines; i++)
	{
		outStream << randomInt() << randomInt() << "." << randomInt() << randomInt() << endl;
	}

	// close up the stream
	outStream.close();

	return 0;
}
