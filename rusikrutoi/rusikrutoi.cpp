#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

vector<string> readStringsFromFile(const string& filename) {
    return vector<string>();
}

void printStrings(const vector<string>& strings) {
    cout << "Вывод строк на экран:" << endl;
    for (size_t i = 0; i < strings.size(); ++i) {
        cout << "Строка " << (i + 1) << ": " << strings[i] << endl;
    }
}

void writeStringsToFile(const vector<string>& strings, const string& filename) {
    ofstream outputFile(filename);
    if (outputFile.is_open()) {
        for (const auto& str : strings) {
            outputFile << str << endl;
        }
        outputFile.close();
        cout << "Строки записаны в файл: " << filename << endl;
    } else {
        cerr << "Ошибка открытия файла для записи!" << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");


    string inputFilename = "input.txt";
    string outputFilename = "output.txt";

    vector<string> strings = readStringsFromFile(inputFilename);
    printStrings(strings);
    writeStringsToFile(strings, outputFilename);

    return 0;
}
