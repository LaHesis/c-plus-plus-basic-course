#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std; // 1-111-11111-X 20 20.3
struct Sales_data
{
    string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int main()
{
    setlocale(LC_ALL, "");
    string patternISBN = "\0";
    Sales_data item, sum;
    double BookPrice = 0;
    bool sameISBN = false;
    int i = 0;
    cout << "���������� 1.22 ������� 1.5.1. (2.41 ������� 2.6.2)\n";
    cout << "������� ������ ���������� - ���������������: ISBN, ���-�� ��������� ������,\n��������� ����� �����.\n";
    while (cin >> item.bookNo >> item.units_sold >> BookPrice)
    {
    item.revenue = item.units_sold*BookPrice;
        if (sameISBN)
        {
            if (item.bookNo == patternISBN)
            {
                cout << "ISBN ���������\n";
                sum.revenue += item.revenue;
                sum.units_sold = sum.units_sold + item.units_sold;
            }
            else
            {
                sameISBN = false;
                i = 0;
                cout << "ISBN �� ���������!\n�� ������� ������ ������� ������� ���������� � ���������� ISBN!\n";
                cout << "����� ���� ����������� ���������� ����������� ISBN:\n"
                << sum.bookNo << " " << sum.units_sold << " " << sum.revenue << "\n";
            }
        }
        else
        {
            patternISBN = item.bookNo;
            sum.bookNo = item.bookNo;
            sum.revenue = item.revenue;
            sum.units_sold = item.units_sold;
            sameISBN = true;
        }
        ++i;
        cout << "������� " << i+1
        << " ���������� (���� ��� ���������� ������������� ISBN)\n���� ���������� ����� (ctrl + z / ctrl + d):\n";
    }
    cout << "ISBN � ����� ���� ����������� ����������:\n" << sum.bookNo << " " << sum.units_sold << " "
    << sum.revenue << " " << sum.revenue/sum.units_sold << "\n";
    cin.get();
    return 0;
}
