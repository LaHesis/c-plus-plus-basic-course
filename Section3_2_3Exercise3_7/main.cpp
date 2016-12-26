#include <iostream>
/*
Используйте серийный оператор for для замены всех символов строки на X.
Что будет, если определить управляющую переменную цикла в предыдущем упражнении как имеющую тип char?
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
    for (char &c : str)
        c = 'X';
    cout << str;
    cin.get();
    return 0;
}
