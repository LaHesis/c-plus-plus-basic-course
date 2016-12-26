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
���������� ��������� �����, �� ��� ��� ��������� ������������ auto.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    cout.setf(ios::fixed);
    int ia[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout << "The first version\n";

    for (auto &r : ia)
    {
        for (auto c : r)
            cout << setw(4) << c;
        cout << endl;
    }

    cout << "\nThe second version\n";
    for (auto i = 0; i < 3; ++i)
    {
        for (auto j = 0; j < 4; ++j)
            cout << setw(4) << ia[i][j];
        cout << endl;
    }

    cout << "\nThe third version\n";
    for (auto *p = ia; p != end(ia); ++p)
    {
        for (auto *p2 = *p; p2 != *p + 4; ++p2)
            cout << setw(4) << *p2;
        cout << endl;
    }

    cout << endl;
    system("PAUSE");
    cin.get();
    return 0;
}
