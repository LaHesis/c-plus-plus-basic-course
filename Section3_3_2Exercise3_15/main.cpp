#include <iostream>
#include <vector>
/*
��������� ���������� ��������� (3_14), �� �� ��� ��� ������� ������
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
int main()
{
    setlocale(LC_CTYPE, "");
    string nsequence;
    vector<string> vstr;
    while (cin >> nsequence)
        vstr.push_back(nsequence);
    for (int i = 0; vstr.size() != i; ++i)
        cout << vstr[i] << ' ';
    cin.get();
    return 0;
}
