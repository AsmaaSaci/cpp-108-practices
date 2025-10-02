#include <iostream>
using namespace std;

int main() {
    int x, y;

    cout << "Enter your x and y: ";
    cin >> x >> y;

    cout << "Your sum: " << x + y << endl;
    cout << "Your mul: " << x * y << endl;
    cout << "Your sub: " << x - y << endl;
    cout << "Your div: " << x / y << endl;
    cout << "Your mod: " << x % y << endl;

    return 0;
}
