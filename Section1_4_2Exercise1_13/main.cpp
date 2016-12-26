#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    cout << "”пражнение 1.13 раздела 1.4.2\nѕереписанные упражнени€ предыдущего раздела:" << endl;
    cout << "”пражнение 1.9 раздела 1.4.1" << endl;
    int i, sum;
    sum = 50;
    for (i = 51; i < 101; ++i)
    {
        cout << endl;
        cout << "sum = " << sum;
        sum += i;
    }
    cout << "\n" << "TOTAL SUM = " << sum << "\n";
    cout << "\n" << "”пражнение 1.10 раздела 1.4.1" << endl;
    for (i = 10; i >= 0; --i) {
        cout << i << endl;
    }
    cout << "\n" << "”пражнение 1.11 раздела 1.4.1" << endl;
    int n1, n2;
    cout << "¬ведите 2 числа \n";
    cin >> n1 >> n2;
    if (n2 < n1) // n1 должна быть меньше n2, как на координатной пр€мой, если не так - то мен€ть их значение местами
    {
        i = n2;
        n2 = n1;
        n1 = i;
    }
    int d = n2 - n1;
    i = n1;
    cout << "ƒлина диапазона: " << d << " \n";
    for (i; i <= n2; ++i)
        cout << i << " ";
    system("PAUSE");
    return 0;
}