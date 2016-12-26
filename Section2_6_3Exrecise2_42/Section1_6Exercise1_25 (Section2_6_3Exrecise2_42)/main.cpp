#include <iostream>
#include "../Sales_data.h"
using namespace std;
int main()
{
    double price;
    setlocale(LC_CTYPE, "");
    cout << "Упражнение 1.25 раздела 1.6 (2.41 раздела 2.6.2)\n" << endl;
    Sales_data total;
    if (cin >> total.bookNo >> total.units_sold >> price) {
        total.revenue = price*total.units_sold;
        Sales_data trans;
        while (cin >> trans.bookNo >> trans.units_sold >> price) {
            trans.revenue = price*trans.units_sold;
            if (total.bookNo == trans.bookNo) {
                total.revenue += trans.revenue;
                total.units_sold += trans.units_sold;
            }
            else {
                cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
                total.bookNo = trans.bookNo;
                total.units_sold = trans.units_sold;
                total.revenue = trans.revenue;
            }
        }
        cout << total.bookNo << " " << total.units_sold << " " << total.revenue << endl;
    }
    else {
        cerr << "No data?!" << endl;
        return -1;
    }
    return 0;
}
