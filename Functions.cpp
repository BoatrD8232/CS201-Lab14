#include "Functions.h"


void readFile(ifstream& inFile, ofstream& outFile) {
    string line;
    //The map of words
    map<int, int>words;
    //The raw word from the file and the word stipped of all non letters.
    string word, newWord;
    string fileName;
    char newChar;
    //Sum of the word length and sum of the word length of every word.
    int wordCount, wordTotal;


    getline(inFile, line);
    outFile << "Size counts for song " << line << ": " << endl;
    while (getline(inFile, line)) {
        stringstream ss(line);
        while (ss >> word) {
            newWord = "";
            //Copied from sentiment analysis. According to comments in that program this loop is copied from class notes.
            //Strips non letter characters from the word.
            for (int i = 0, len = word.size(); i < len; i++) {
                if (isalpha(word[i])) {
                    newChar = tolower(word[i]);
                    newWord += newChar;
                }
            }
            word = newWord;
            if (word.size() > 0) {
                words[word.size()] += 1;
            }
        }
    }
    wordCount = 0;
    wordTotal = 0;
    //Totals and averages the word counts. Also outputs the contents of the map.
    for (auto count : words) {
        outFile << setw(2) << count.first << ": " << count.second << endl;
        wordCount += count.second;
        wordTotal += count.second * count.first;
    }
    outFile << "Average word size: " << wordTotal / (float)wordCount << endl;
    outFile << '\n' << endl;
}