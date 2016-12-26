#include <iostream>
#include "../Sales_item.h"
using namespace std;

int main()
{
    setlocale(LC_CTYPE, "");
    cout << "”пражнение 1.25 раздела 1.6" << endl;
    Sales_item total;
    if (cin >> total) {
        Sales_item trans;
        while (cin >> trans) {
            if (total.isbn() == trans.isbn())
                total += trans;
            else {
                cout << total << endl;
                total = trans;
            }
        }
        cout << total << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}
