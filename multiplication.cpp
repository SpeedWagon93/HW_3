#include <iostream>

using namespace std;

int main()
{
    double a;

    cout << "Введите действительное число a: ";
    cin >> a;

    double a2 = a * a;
    double a4 = a2 * a2;
    double a8 = a4 * a4;
    double a10 = a8 * a2;

    cout << "a^4 = " << a4 << endl;
    cout << "a^10 = " << a10 << endl;

    return 0;

}