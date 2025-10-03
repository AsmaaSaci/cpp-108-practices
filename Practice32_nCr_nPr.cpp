#include <iostream>
using namespace std;
long long fact(int n) {
    long long f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}
int main() {
    int n,r;
    cin >> n >> r;
    long long nCr = fact(n)/(fact(r)*fact(n-r));
    long long nPr = fact(n)/fact(n-r);
    cout << "nCr=" << nCr << " nPr=" << nPr;
}
