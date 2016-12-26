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
Напишите программу, определяющую два символьных массива, инициализированных
строковыми литералами. Теперь определите третий символьный массив для содержания
результата конкатенации этих двух массивов. Используйте функции strcpy() и strcat()
для копирования этих двух массивов в третий.
NB! Передаваемый функциям массив должен быть достаточно большим, включая нулевой символ в конце.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    char fa1[] = "the first char array";
    char fa2[] = "the second char array";
    char fa3[50] = "the third array";
    strcpy(fa3, fa1);
    strcat(fa3, fa2);
    for (auto i : fa3)
        cout << i;
    cout << endl;
    system("PAUSE");
    cin.get();
    return 0;
}
