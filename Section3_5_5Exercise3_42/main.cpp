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
using std::begin;
/*
Напишите программу, копирующую вектор целых чисел в массив целых чисел.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    vector<int> v(5, 3);
    int a[5];
    auto it = begin(v);
    for (auto &i: a)
    {
        i = *it;
        ++it;
    }
    for (auto i: a)
        cout << i;
    system("PAUSE");
    cin.get();
    return 0;
}
