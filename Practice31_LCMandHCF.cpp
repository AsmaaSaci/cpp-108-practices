#include <iostream>
using namespace std;
int hcf(int a,int b) {
    if(b==0) return a;
    return hcf(b,a%b);
}
int main() {
    int a,b;
    cin >> a >> b;
    int h = hcf(a,b);
    int l = (a*b)/h;
    cout << "HCF=" << h << " LCM=" << l;
}
