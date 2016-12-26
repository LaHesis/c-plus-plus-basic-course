#include <iostream>
#include "Sales_item.h"
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    Sales_item item, ISBN_previous;
    int i = 0;               // 0-000-00000-X
    int cnt = 0;
    bool singleISBN = true;
    cout << "���������� 1.23 ������� 1.5.2: �������� ���������, ������� ������ ��������� ���������� � ������������ " <<
                    "���������� ���������� ��� ������� ISBN\n";
    cout << "������� ������ ����������:\n";
    while (cin >> item)
    {
        if (i != 0)
        {
            if (compareIsbn(item,ISBN_previous))
            {
                ++cnt;
                ISBN_previous = item;
            }
            else
            {
                singleISBN = false;
                cout << "����� ISBN\n";
                cout << "��� ISBN: " << ISBN_previous.isbn() << " ������������� " << cnt << " ����������.";
                cnt = 1;
                ISBN_previous = item;
            }
        }
        else {ISBN_previous = item; ++cnt;}
        ++i;
        cout << "������� " << i+1 << " ����������, ���� ���������� ����� (ctrl + z / ctrl + d):\n";
    }
    if (singleISBN)
        cout << "��� ISBN: " << ISBN_previous.isbn() << " ������������� " << cnt << " ����������.\n";
    system("PAUSE");
    return 0;
}