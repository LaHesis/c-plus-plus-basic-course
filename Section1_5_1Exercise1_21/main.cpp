#include <iostream>
#include "Sales_item.h"
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "");
    Sales_item mas[2];
    cout << "���������� 1.21 ������� 1.5.1.";
    for (int i = 0; i < 2; ++i)
    {
        cout << "\n������� ���������� � " << i+1 << " ";
        cin >> mas[i];
    }
    cout << "��������� ���������� ����� ��������� ��������:\n" << mas[0] + mas[1];
    system("PAUSE");
    return 0;
}