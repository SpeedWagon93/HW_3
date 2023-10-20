#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;

    cout << "Введите  число x: ";
    cin >> x;

    cout << "Введите  число y: ";
    cin >> y;
    
    x > y ? cout << x << endl : cout << x << " " << y << endl;

    return 0;

}