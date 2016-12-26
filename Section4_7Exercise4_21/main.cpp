#include <iostream>
#include <vector>
#include <stdlib.h>
#include <iterator>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::end;
using std::setw;
using std::ios;
using std::left;

/*
Напишите программу, использующую условный оператор для поиска в векторе vector<int> элементов с нечетным значением и их удвоения.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    cout.setf(ios::fixed);
    vector<int> ivec;
    for (int i = 0; i < 10; i++)
        ivec.push_back(i);
    ivec[4] = -3;
    for (auto &v : ivec)
        v = (v < 0) ? (v*2) : v;
    for (auto v : ivec)
        cout << v << " ";
    system("PAUSE");
    cin.get();
    return 0;
}
