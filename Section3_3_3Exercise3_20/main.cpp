#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>

/*
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
    int prev = 0;
    unsigned int i = 1;
    for (auto intmember : intset)
    {
        if (i == 1) prev = intmember;
        if (i > 1) cout << intmember + prev << " - sum of the " << i-1 << "th and the " << i << "th\n";
        prev = intmember;
        ++i;
    }
    cout << endl;
    for (unsigned int index = 0, index2 = intset.size()-1; (index != intset.size()) and (index <= index2); ++index, --index2)
        cout << intset[index] << "+" << intset[index2] << " = " << intset[index] + intset[index2] << endl;
    system("PAUSE");
    cin.get();
    return 0;
}
