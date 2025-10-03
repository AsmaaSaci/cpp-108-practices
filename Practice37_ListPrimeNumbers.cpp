#include <iostream>
using namespace std;
int main() {
    int start,end;
    cin >> start >> end;
    for(int num=start; num<=end; num++) {
        bool prime=true;
        if(num<2) continue;
        for(int i=2;i<=num/2;i++) {
            if(num%i==0) { prime=false; break; }
        }
        if(prime) cout << num << " ";
    }
}
