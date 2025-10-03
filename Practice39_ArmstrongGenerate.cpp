#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int num=1; num<=n; num++) {
        int temp=num,sum=0,digits=0;
        while(temp>0){digits++; temp/=10;}
        temp=num;
        while(temp>0){
            sum += pow(temp%10,digits);
            temp/=10;
        }
        if(sum==num) cout << num << " ";
    }
}
