#include <iostream>
#include <fstream>
#include <string>

using namespace std;
string Slovo() {

    setlocale(0, "");
    // Открываем файл для чтения
    ifstream inputFile("test1.txt");

    // Проверяем, удалось ли открыть файл
    if (!inputFile.is_open()) {
        cerr << "Ошибка открытия файла!" << endl;

    }

    // Считываем содержимое файла в строку
    string inputString;
    getline(inputFile, inputString);

    // Закрываем файл
    inputFile.close();

    // Переворачиваем строку
  
    string words = _strrev((char*)inputString.c_str());

    // string words;
    words[rand() % (sizeof(words) / sizeof(words[0]))];
    //выделяем слово ;
    cout << words;//закоментить или оставить если нужен ответ 
    return words;
}