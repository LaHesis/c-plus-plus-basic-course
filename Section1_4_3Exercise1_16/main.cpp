#include <iostream>
#include <stdlib.h>
int main() {
    setlocale(LC_CTYPE, "");
    std::cout << "”пражнение 1.16 раздела 1.4.3 - выводит сумму набора целых чисел, прочитанных при помощи объекта cin.\n" << std::endl;
    std::cout << "¬ведите набор целых чисел\n";
    int number, sum;
    sum = 0;
    while (std::cin >> number)
    {
        sum += number;
    }
    std::cout << "—умма набора целых чисел равна " << sum << "\n";
    system("PAUSE");
    return 0;
}