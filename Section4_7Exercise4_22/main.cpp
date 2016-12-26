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
ƒополните программу, присваивающую переменной значение оценки (высока€, проходна€, не проходна€),
еще одной оценки, минимально проходной, от 60 до 75 включительно. Ќапишите две версии:
одна использует только условные операторы;
втора€ использует один или несколько операторов if.  ак по вашему, какую версию проще пон€ть и почему?

ѕроще пон€ть версию с операторами if, т.к. условные операторы трудно воспринимать в случае двух и более вложений.
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


