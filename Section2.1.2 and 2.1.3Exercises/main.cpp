#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
    unsigned u = 10, u2 = 42;
    cout << "”пражнение 2.3 раздела 2.1.2" << endl;
    cout << u2 - u << endl; //32
    cout << u - u2 << endl; //4294967264
    int i = 10, i2 = 42;
    cout << i2 - i << endl; //32
    cout << i - i2 << endl; //-32
    cout << i - u << endl; //
    cout << u - i << endl; //0
    cout << "”пражнение 2.8 раздела 2.1.3:" << endl;
    cout << "2\t\115\n" << endl; //32
    cin.get();
    return 0;
}
