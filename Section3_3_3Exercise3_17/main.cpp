#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <stdlib.h>

/*
ѕрочитайте последовательность слов из потока cin и сохраните их в векторе.
ѕрочитав все слова, обработайте вектор и переведите символы каждого слова
в верхний регистр. ќтобразите преобразованные элементы по восемь слов на строку.
*/
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;
int main()
{
    setlocale(LC_CTYPE, "");
    vector<string> in;
    string word;
    while (cin >> word)
        in.push_back(word);
    for (auto &s : in)
            for (auto &ch : s)
                ch = toupper(ch);
    unsigned cnt = 0;
    for (auto w : in)
    {
        cout << w << " ";
        ++cnt;
        if (cnt == 8) {cout << endl; cnt = 0;}
    }
    system("PAUSE");
    cin.get();
    return 0;
}
