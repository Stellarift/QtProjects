#include <iostream>
#include "nod.h"
using namespace std;

int main() {
    int a, b;
    cout << "Введите два целых числа: ";
    cin >> a >> b;
    cout << "НОД " << a << " и " << b << " = " << nod(a, b) << endl;
    return 0;
}