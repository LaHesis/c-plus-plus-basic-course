#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    cout << "���������� 1.13 ������� 1.4.2\n������������ ���������� ����������� �������:" << endl;
    cout << "���������� 1.9 ������� 1.4.1" << endl;
    int i, sum;
    sum = 50;
    for (i = 51; i < 101; ++i)
    {
        cout << endl;
        cout << "sum = " << sum;
        sum += i;
    }
    cout << "\n" << "TOTAL SUM = " << sum << "\n";
    cout << "\n" << "���������� 1.10 ������� 1.4.1" << endl;
    for (i = 10; i >= 0; --i) {
        cout << i << endl;
    }
    cout << "\n" << "���������� 1.11 ������� 1.4.1" << endl;
    int n1, n2;
    cout << "������� 2 ����� \n";
    cin >> n1 >> n2;
    if (n2 < n1) // n1 ������ ���� ������ n2, ��� �� ������������ ������, ���� �� ��� - �� ������ �� �������� �������
    {
        i = n2;
        n2 = n1;
        n1 = i;
    }
    int d = n2 - n1;
    i = n1;
    cout << "����� ���������: " << d << " \n";
    for (i; i <= n2; ++i)
        cout << i << " ";
    system("PAUSE");
    return 0;
}