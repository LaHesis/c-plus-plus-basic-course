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
�������� ���������, ��� ��������� ������ �� ������ ����� �����,
������� �������� �������� ��������� ��������, ��������������� ���
������� � �������.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    int ia [10];
    unsigned int i = 0;
    for (auto &m : ia)
        {
        m = i;
        ++i;
        }
    for (auto m : ia)
        cout << m << " ";
    system("PAUSE");
    cin.get();
    return 0;
}
