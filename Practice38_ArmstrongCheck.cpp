#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n,temp,sum=0,digits=0;
    cin >> n;
    temp=n;
    while(temp>0){digits++; temp/=10;}
    temp=n;
    while(temp>0){
        sum += pow(temp%10,digits);
        temp/=10;
    }
    if(sum==n) cout << "Armstrong";
    else cout << "Not Armstrong";
}
