#include <iostream>
/*
Напишите программу, читающую две строки и сообщающую, равны ли они.
В противном случае программа сообщает, которая из них больше.
Затем измените программу так, чтобы она сообщала, одинаковая ли у строк длина,
а в противном случае - которая из них длиннее.
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    setlocale(LC_CTYPE, "");
    string fline, sline;
    cout << "Enter the first line " << endl;
    getline(cin, fline);
    cout << "Enter the second line " << endl;
    getline(cin, sline);
    /* //Первый вариант
    if (fline == sline)
        cout << "The strings are equal" << endl;
    else
        if (fline > sline)
            cout << "The first line is greater";
        else
            cout << "The second line is greater";
    cin.get();
    */
    // Измененная
    if (fline.size() == sline.size())
        cout << "Lines have the same length";
    else
        if (fline.size() > sline.size())
            cout << "The first line is greater, its length is " << fline.size();
        else cout << "The second line is greater, its length is " << sline.size();
    cin.get();
    return 0;
}
