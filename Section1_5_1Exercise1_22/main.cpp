#include <iostream>
#include "Sales_item.h"
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    Sales_item item, ISBN_pattern, sum;
    int i = 0;
    cout << "���������� 1.22 ������� 1.5.1.\n";
    cout << "������� ������ ����������:\n";
    while (cin >> item)
    {
        if (i != 0)
        {
            if (compareIsbn(item, ISBN_pattern))
            {
                cout << "ISBN ���������\n";
                sum += item;
            }
            else
            {
                --i;
                cout << "ISBN �� ���������!\n�� ������� ������ ������� ������� ���������� � ���������� ISBN!";
            }
        }
        else {ISBN_pattern = item; sum = ISBN_pattern;}
        ++i;
        cout << "������� " << i+1 << " ����������, ���� ���������� ����� (ctrl + z / ctrl + d):\n";
    }
    cout << "����� ���� ����������� ����������:\n" << sum << "\n";
    system("PAUSE");
    return 0;
}