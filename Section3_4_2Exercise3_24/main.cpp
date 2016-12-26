#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>

/*
Переделайте последнее упражнение
раздела 3.3.3 с использованием итераторов.

Прочитайте набор целых чисел в вектор.
Отобразите сумму каждой пары соседних элементов.
Измените программу так, чтобы она отображала сумму первого и последнего элементов, затем сумму второго и предпоследнего и т.д.
*/
using std::cout;
using std::cin;
using std::endl;
using std::vector;
int main()
{
    setlocale(LC_CTYPE, "");
    vector<int> intset;
    int inputint;
    while (cin >> inputint)
        intset.push_back(inputint);
    cout << "Sums:\n";
    vector<int>::iterator itprev = intset.begin();
    cout << endl;
    auto itleft = intset.cbegin(), itright2 = intset.cend();
    --itright2;
    while (itleft < itright2)
    {
        cout << *itleft << " + " << *itright2 << " = " << (*itleft) + (*itright2) << "\n";
        ++itleft;
        --itright2;
    }

    cout << endl;
    for (auto intmember : intset)
    {
        if (itprev != intset.begin())
            cout << intmember << " + " << *(itprev-1) << " = " << intmember + (*(itprev-1)) << "\n";
        ++itprev;
    }
    system("PAUSE");
    cin.get();
    return 0;
}
