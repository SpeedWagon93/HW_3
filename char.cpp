#include <iostream>

using namespace std;

int main() 
{
    char c = 127;

    c++;

    std::cout << "Значение: " << (int)c << std::endl;
    std::cout << "Символ: " << c << std::endl;

    return 0;
}