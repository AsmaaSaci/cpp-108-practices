#include <iostream>
using namespace std;

int main() {
    int x = 80, y = 52;
    if (x == 80) {
        cout << "the firs condition is met " << endl;
        if (y == 52) {
            cout << "this is a nested if statement " << endl;
        }
    }
    return 0;
}
