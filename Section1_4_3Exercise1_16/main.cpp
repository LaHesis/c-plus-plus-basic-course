#include <iostream>
#include <stdlib.h>
int main() {
    setlocale(LC_CTYPE, "");
    std::cout << "���������� 1.16 ������� 1.4.3 - ������� ����� ������ ����� �����, ����������� ��� ������ ������� cin.\n" << std::endl;
    std::cout << "������� ����� ����� �����\n";
    int number, sum;
    sum = 0;
    while (std::cin >> number)
    {
        sum += number;
    }
    std::cout << "����� ������ ����� ����� ����� " << sum << "\n";
    system("PAUSE");
    return 0;
}