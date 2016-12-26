#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>
#include <iterator>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::end;
/*
Напишите программу, сравнивающую два массива на равенство.
Напишите подобную программу для сравнения двух векторов.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    string a[] = {"one", "two", "three"}, a2[] = {"one", "two", "three"};
    auto pba = a;
    auto pea = end(a);
    auto pba2 = a2;
    auto pea2 = end(a2);
    bool equa = false;
    while (*pba == *pba2 && pba <= pea && pba2 <= pea2)
    {
        cout << *pba << " = " << *pba2 << endl;
        ++pba;
        ++pba2;
        if (pba == pea && pba2 == pea2)
        {
            equa = true;
            cout << "Arrays are equal.";
        }
    }
    if (equa == false) cout << "Arrays are not equal";
    cout << endl;

    vector<int> v1(10, 1), v2(10, 1);
    if (v1 == v2) cout << "Vectors are equal.\n"; else cout << "Vectors are not equal.\n";
    system("PAUSE");
    cin.get();
    return 0;
}
