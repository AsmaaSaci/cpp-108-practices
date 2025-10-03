#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int num=2; num<=n; num++) {
        bool prime=true;
        for(int i=2;i<=num/2;i++) {
            if(num%i==0) { prime=false; break; }
        }
        if(prime) cout << num << " ";
    }
}
