#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>

/*
���������� ������������������ ���� �� ������ cin � ��������� �� � �������.
�������� ��� �����, ����������� ������ � ���������� ������� ������� �����
� ������� �������. ���������� ��������������� �������� �� ������ ���� �� ������.
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
int main()
{
    setlocale(LC_CTYPE, "");
    vector<string> in;
    string word;
    while (cin >> word)
        in.push_back(word);
    for (auto &s : in)
            for (auto &ch : s)
                ch = toupper(ch);
    unsigned cnt = 0;
    for (auto w : in)
    {
        cout << w << " ";
        ++cnt;
        if (cnt == 8) {cout << endl; cnt = 0;}
    }
    system("PAUSE");
    cin.get();
    return 0;
}
