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
using std::begin;
/*
�������� ���������, ���������������� ������ ���������� �� ������� ����� �����.
*/
int main()
{
    setlocale(LC_CTYPE, "");
    int iar[] = {1, 2, 3};
    vector<int> iv(begin(iar), end(iar));
    for (auto i: iv)
        cout << i;
    system("PAUSE");
    cin.get();
    return 0;
}
