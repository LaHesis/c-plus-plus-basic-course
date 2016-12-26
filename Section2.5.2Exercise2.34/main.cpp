#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "");
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << g << endl;
    a = 42;
    b = 42;
    c = 42;
  /**<  d = 42; error: invalid conversion from 'int' to 'int*'  */
  /**<  e = 42;  error: invalid conversion from 'int' to 'const int*'  */
  /**<  g = 42; error: assignment of read-only reference 'g'  */
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    cout << g << endl;
    cin.get();
}
