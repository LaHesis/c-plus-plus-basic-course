#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>

/*
Перепешите программу кластеризацации оценок
из раздела 3_3_3 с использованием итераторов
*/
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main()
{
    setlocale(LC_CTYPE, "");
    vector<unsigned> scores (11, 0);
    unsigned grade;
    auto iter = scores.begin();
    while (cin >> grade)
        if (grade <= 100)
        {
            iter += grade / 10;
            ++(*iter);
        }
    for (auto e : scores)
        cout << e << " ";
    system("PAUSE");
    cin.get();
    return 0;
}
