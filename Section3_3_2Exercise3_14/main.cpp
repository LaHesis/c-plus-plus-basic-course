#include <iostream>
#include <vector>
/*
Напишите программу, читающую последовательность целых чисел из потока cin и сохраняющую их в векторе
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
int main()
{
    setlocale(LC_CTYPE, "");
    int nsequence;
    vector<int> vstr;
    while (cin >> nsequence)
        vstr.push_back(nsequence);
    for (int i = 0; vstr.size() != i; ++i)
        cout << vstr[i] << ' ';
    cin.get();
    return 0;
}
