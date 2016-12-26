#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; // 1-111-11111-X 20 20.3
struct Sales_data {
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};
int main() {
    setlocale(LC_CTYPE, "");
    Sales_data mas[2];
    double BookPrice = 0;
    cout << "”пражнение 1.21 раздела 1.5.1. (2.41 раздела 2.6.2)";
    for (int i = 0; i < 2; ++i)
    {
        cout << "\n¬ведите транзакцию є " << i+1 << ": ISBN, кол-во проданных единиц, стоимость одной книги.";
        cin >> mas[i].bookNo >> mas[i].units_sold >> BookPrice;
        mas[i].revenue = mas[i].units_sold*BookPrice;
    }
    if (mas[0].bookNo == mas[1].bookNo) {
        unsigned totalCnt = mas[0].units_sold + mas[1].units_sold;
        double totalRev = mas[0].revenue + mas[1].revenue;
        cout << mas[1].bookNo << " " << totalCnt << " " << totalRev << " ";
        if (totalCnt != 0) cout << totalRev/totalCnt << endl;
        else cout << "no sales" << endl;
        cin.get();
        return 0;
    }
    else {
        cerr << "not the same ISBN" << endl;
        cin.get();
        return -1;
    }
}
