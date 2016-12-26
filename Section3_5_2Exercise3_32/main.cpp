#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
/*
Скопируйте массив, определенный в предыдущем упражнении, в другой массив.
Перезапишите эту программу так, чтобы использовались векторы.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    int ia[10];
    vector<int> v1(10, 0), v2(10, 0);
    unsigned int i = 0;
    for (auto &m : ia)
        {
        m = i;
        ++i;
        v1[i] = i;
        }
    for (auto m : ia)
        cout << m << " ";
    int ia2[10];
    for (int i = 0; i <= 10; ++i)
        ia2[i] = ia[i];
    cout << "\nThe second array:\n";
    for (auto m : ia)
        cout << m << " ";
    v2 = v1;
    cout << "\nThe second vector:\n";
    for (auto m : v2)
        cout << m << " ";
    system("PAUSE");
    cin.get();
    return 0;
}
