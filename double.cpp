#include <iostream>

using namespace std;

int main() {
    double d = 1.7E+308; 
    cout << "Значение: " << d << endl; 
    d *= 2;

    cout << "Значение: " << d << endl; 
    cout << "Символ: " << (char)d << endl; 

    return 0;
}