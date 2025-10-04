#include <iostream>
#include <string>
using namespace std;
int main() {
    string bin;
    cin >> bin;
    int dec=0;
    for(char c:bin) dec=dec*2+(c-'0');
    cout << oct << dec;
}
