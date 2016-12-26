#include <iostream>
#include "Sales_item.h"
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    Sales_item item, ISBN_previous;
    int i = 0;               // 0-000-00000-X
    int cnt = 0;
    bool singleISBN = true;
    cout << "Упражнение 1.23 раздела 1.5.2: напишите программу, которая читает несколько транзакций и подсчитывает " <<
                    "количество транзакций для каждого ISBN\n";
    cout << "Введите первую транзакцию:\n";
    while (cin >> item)
    {
        if (i != 0)
        {
            if (compareIsbn(item,ISBN_previous))
            {
                ++cnt;
                ISBN_previous = item;
            }
            else
            {
                singleISBN = false;
                cout << "Новый ISBN\n";
                cout << "Для ISBN: " << ISBN_previous.isbn() << " зафиксировано " << cnt << " транзакций.";
                cnt = 1;
                ISBN_previous = item;
            }
        }
        else {ISBN_previous = item; ++cnt;}
        ++i;
        cout << "Введите " << i+1 << " транзакцию, либо завершение ввода (ctrl + z / ctrl + d):\n";
    }
    if (singleISBN)
        cout << "Для ISBN: " << ISBN_previous.isbn() << " зафиксировано " << cnt << " транзакций.\n";
    system("PAUSE");
    return 0;
}