#include <iostream>
/*
�������� ���������, �������� ��� ������ � ����������, ����� �� ���.
� ��������� ������ ��������� ��������, ������� �� ��� ������.
����� �������� ��������� ���, ����� ��� ��������, ���������� �� � ����� �����,
� � ��������� ������ - ������� �� ��� �������.
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    setlocale(LC_CTYPE, "");
    string fline, sline;
    cout << "Enter the first line " << endl;
    getline(cin, fline);
    cout << "Enter the second line " << endl;
    getline(cin, sline);
    /* //������ �������
    if (fline == sline)
        cout << "The strings are equal" << endl;
    else
        if (fline > sline)
            cout << "The first line is greater";
        else
            cout << "The second line is greater";
    cin.get();
    */
    // ����������
    if (fline.size() == sline.size())
        cout << "Lines have the same length";
    else
        if (fline.size() > sline.size())
            cout << "The first line is greater, its length is " << fline.size();
        else cout << "The second line is greater, its length is " << sline.size();
    cin.get();
    return 0;
}
