#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;
vector<string> readStringsFromFile(const string& filename) {
    vector<string> lines;

    // Создаем объект для чтения файла
    ifstream File(filename);

    // Проверяем, удалось ли открыть файл
    if (!File.is_open()) {
        cout << "ERROR: couldn't open '" << filename << "'" << endl;
        return lines;  // Возвращаем пустой вектор
    }

    std::string line;

    // Читаем файл построчно
    while (std::getline(File, line)) {
        lines.push_back(line);  // Добавляем строку в вектор
    }

    // Закрываем файл
   File.close();

    return lines;
}




int main()
{
    readStringsFromFile("D:\\projects\\first_function\\xd.txt");
}

