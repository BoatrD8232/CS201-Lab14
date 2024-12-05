#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <iomanip>
using namespace std;
#pragma once

//PRE- Takes in the input stream of a single file and the output stream.
//POST- Tallies the word length totals of the file, fills the map and outputs the map and the averages to the output file.
void readFile(ifstream& inFile, ofstream& outFile);
