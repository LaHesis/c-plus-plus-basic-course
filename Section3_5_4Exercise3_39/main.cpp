#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>
#include <iterator>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::end;
/*
Напишите программу, сравнивающую две строки. Затем напишите программу,
сравнивающую значения двух символьных строк в стиле С.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    string s1("s1"), s2("s2");
    if (s1 == s2) cout << "strings are equal" << endl;
    if (s1 > s2) cout << "s1 > s2" << endl;
        else cout << "s1 < s2" << endl;
    char s3[] = {'1', '2', '3', '\0'}, s4[] = {'1', '2', '\0'};
    if (strcmp(s3, s4) > 0) cout << "s3 > s4" << endl;
        else
        if (strcmp(s3, s4) < 0) cout << "s3 > s4";
            else cout << "C-style string are equal" << endl;
    system("PAUSE");
    cin.get();
    return 0;
}
