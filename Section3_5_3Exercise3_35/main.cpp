#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>
#include <iterator>
using std::end;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

/*
Напишите программу, которая использует указатели для обнуления элементов массива.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    int a[] = {1, 2, 3, 4, 5};
    auto pb = a;
    auto pe = end(a);
    while (pb <= pe)
    {
        *pb = 0;
        ++pb;
    }
    for (auto i : a)
        cout << i << " ";
    system("PAUSE");
    cin.get();
    return 0;
}
