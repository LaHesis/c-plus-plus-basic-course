#include <iostream>
/*
�������� ���������, ������� ������ ������ ��������, ���������� ����� ����������, � �������� ��,
�� ��� ��� ������ ����������.
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    setlocale(LC_CTYPE, "");
    string str, wpunct;
    cout << "Enter a string ";
    getline(cin, str);
    for (auto &c : str)
        if (!ispunct(c))
            wpunct += c;
    cout << wpunct;
    cin.get();
    return 0;
}
