#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>
#include <iterator>
#include <cstring>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::end;
/*
�������� ���������, ������������ ��� ���������� �������, ������������������
���������� ����������. ������ ���������� ������ ���������� ������ ��� ����������
���������� ������������ ���� ���� ��������. ����������� ������� strcpy() � strcat()
��� ����������� ���� ���� �������� � ������.
NB! ������������ �������� ������ ������ ���� ���������� �������, ������� ������� ������ � �����.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    char fa1[] = "the first char array";
    char fa2[] = "the second char array";
    char fa3[50] = "the third array";
    strcpy(fa3, fa1);
    strcat(fa3, fa2);
    for (auto i : fa3)
        cout << i;
    cout << endl;
    system("PAUSE");
    cin.get();
    return 0;
}
