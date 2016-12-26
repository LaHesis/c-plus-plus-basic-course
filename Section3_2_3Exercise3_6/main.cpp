#include <iostream>
/*
Используйте серийный оператор for для замены всех символов строки на X
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
    for (auto &c : str)
        c = 'X';
    cout << str;
    cin.get();
    return 0;
}
