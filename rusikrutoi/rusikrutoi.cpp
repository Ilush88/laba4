#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
vector<string> readStringsFromFile(const string& filename) {

    return vector<string>();
}

void printStrings(const vector<string>& strings) {

}

void writeStringsToFile(const vector<string>& strings, const string& filename) {

}

int main() {

    string inputFilename = "input.txt";

    string outputFilename = "output.txt";

    vector<string> strings = readStringsFromFile(inputFilename);

    printStrings(strings);

    writeStringsToFile(strings, outputFilename);

    return 0;
}
