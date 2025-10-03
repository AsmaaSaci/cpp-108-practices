#include <iostream>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    switch(x) {
        case 1:
            switch(y) {
                case 1: cout << "X=1, Y=1"; break;
                case 2: cout << "X=1, Y=2"; break;
                default: cout << "X=1, Y other";
            } break;
        case 2: cout << "X=2"; break;
        default: cout << "Other";
    }
}
