#include <iostream>
/*
�������� ���������, �������� ������ �� ������������ ���������� �����
� ����������� �� � ���� ������� ������. ���������� ���������� ������.
����� �������� ��������� ���, ����� �������� �������� ��������� ������ ���������.
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    setlocale(LC_CTYPE, "");
    string line, total;
    /* // �� ���������
    while (getline(cin, line))
    {
        total += line;
        total += " ";
    }
    */
    while (getline(cin, line))
    {
        total += line;
        total += " "; // ��������
    }
    cout << total;
    cin.get();
    return 0;
}
