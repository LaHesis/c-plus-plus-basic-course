#include <iostream>
/*
Напишите программу, читающую со стандартного устройства ввода по одной строке за раз.
Измените программу так, чтобы читать по одному слову за раз.
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    setlocale(LC_CTYPE, "");
    string line;
    cout << "Enter a line ";
    while (getline(cin,line))
    {
        cout << "Entered line: " << endl;
        cout << line << endl;
        cout << "Enter next line or eof" << endl;
    }
    cout << "Enter a word";
    string word;
    cin.clear();
    while (cin >> word);
    {
        cout << "Entered word: " << endl;
        cout << word << endl;
        cout << endl << "Enter next word or eof" << endl;
    }
    return 0;
}
