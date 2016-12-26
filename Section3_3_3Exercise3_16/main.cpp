#include <iostream>
#include <vector>
/*
Напишите программу, выводящую размер и содержимое вектора из упражнения 3.13. Проверьте
правильность своих ответов на это упражнение. При неправильных ответах повторно изучите
раздел 3.3.1
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
int main()
{
    setlocale(LC_CTYPE, "");
    vector<int> v1, v2(10), v3(10, 42), v4{10}, v5{10, 42};
    vector<string> v6{10}, v7{10, "hi!"};
    cout << "\n v1: ";
    for (auto i : v1)
        cout << i << ", ";

    cout << "\n v2: ";
    for (auto i : v2)
        cout << i << ", ";

    cout << "\n v3: ";
    for (auto i : v3)
        cout << i << ", ";

    cout << "\n v4: ";
    for (auto i : v4)
        cout << i << ", ";

    cout << "\n v5: ";
    for (auto i : v5)
        cout << i << ", ";

    cout << "\n v6: ";
    for (auto i : v6)
        cout << i << ", ";

    cout << "\n v7: ";
    for (auto i : v7)
        cout << i << ", ";
    cin.get();
    return 0;
}
