#include <iostream>
/*
ѕерепишите программу 3.6, сначала использу€ оператор while, а затем традиционный цикл for.
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
    setlocale(LC_CTYPE, "");
    string str;
    cout << "Enter a string ";
    getline(cin, str);
    /*
    size_t i = 0;
    while (i <= str.size())
    {
        str[i] = 'X';
        ++i;
    }
    */
    for (decltype(str.size()) i = 0; i <= str.size(); i++)
        str[i] = 'X';
    cout << str << endl;
//    cout << i << endl;
    cout << str.size(); //NB! ‘ункци€ возвращает размер счита€ по-человечески - с единицы
    cin.get();
    return 0;
}
