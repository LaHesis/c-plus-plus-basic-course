#include <iostream>
/*
Напишите программу, читающую строки со стандартного устройства ввода
и суммирующую их в одну большую строку. Отобразите полученную строку.
Затем измените программу так, чтобы отделить соседние введенные строки пробелами.
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    setlocale(LC_CTYPE, "");
    string line, total;
    /* // До изменения
    while (getline(cin, line))
    {
        total += line;
        total += " ";
    }
    */
    while (getline(cin, line))
    {
        total += line;
        total += " "; // Изменено
    }
    cout << total;
    cin.get();
    return 0;
}
