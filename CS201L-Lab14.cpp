// CS201L-Lab14.cpp 
// David Boatright
// 12/4/24

#include "Functions.h"


int main()
{
    ifstream inFile;
    ofstream outFile;
    outFile.open("output.txt");
    string fileName;

    for (int i = 1; i <= 9; i++) {
        //Open input file.
        fileName = "song" + to_string(i) + ".txt";
        inFile.open(fileName);
        readFile(inFile, outFile);
        inFile.close();
    }
    outFile.close();
}
 
