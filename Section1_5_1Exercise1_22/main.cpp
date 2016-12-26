#include <iostream>
#include "Sales_item.h"
#include <stdlib.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "");
    Sales_item item, ISBN_pattern, sum;
    int i = 0;
    cout << "Упражнение 1.22 раздела 1.5.1.\n";
    cout << "Введите первую транзакцию:\n";
    while (cin >> item)
    {
        if (i != 0)
        {
            if (compareIsbn(item, ISBN_pattern))
            {
                cout << "ISBN совпадают\n";
                sum += item;
            }
            else
            {
                --i;
                cout << "ISBN не совпадают!\nПо условию задачи следует вводить транзакции с одинаковым ISBN!";
            }
        }
        else {ISBN_pattern = item; sum = ISBN_pattern;}
        ++i;
        cout << "Введите " << i+1 << " транзакцию, либо завершение ввода (ctrl + z / ctrl + d):\n";
    }
    cout << "Сумма всех прочитанных транзакций:\n" << sum << "\n";
    system("PAUSE");
    return 0;
}