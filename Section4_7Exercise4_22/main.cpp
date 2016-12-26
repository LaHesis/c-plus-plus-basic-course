#include <iostream>
#include <vector>
#include <stdlib.h>
#include <iterator>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
using std::end;
using std::setw;
using std::ios;
using std::left;

/*
��������� ���������, ������������� ���������� �������� ������ (�������, ���������, �� ���������),
��� ����� ������, ���������� ���������, �� 60 �� 75 ������������. �������� ��� ������:
���� ���������� ������ �������� ���������;
������ ���������� ���� ��� ��������� ���������� if. ��� �� ������, ����� ������ ����� ������ � ������?

����� ������ ������ � ����������� if, �.�. �������� ��������� ������ ������������ � ������ ���� � ����� ��������.
*/


void Check (int grade)
{
    string FinalGrade;
    FinalGrade = (grade > 90) ? "high pass" : (grade > 75) ? "pass" : (grade >= 60) ? "min pass" : "fail";
    cout << FinalGrade << endl;
}

void CheckIF (int grade)
{
    string FinalGrade;
    if (grade > 90) FinalGrade = "high pass";
    else
        if (grade >= 75) FinalGrade = "pass";
    else
        if (grade >= 65) FinalGrade = "min pass";
    else FinalGrade = "fail";
    cout << FinalGrade << endl;
}

int main()
{
    setlocale(LC_CTYPE, "");
    cout.setf(ios::fixed);
    string a, b;
    cout << "Check" << endl;
    Check(65);
    Check(80);
    cout << "CheckIF" << endl;
    CheckIF(65);
    CheckIF(80);
    system("PAUSE");
    cin.get();
    return 0;
}


