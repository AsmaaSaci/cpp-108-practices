#include <iostream>
using namespace std;
int main() {
    int n,x,arr[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>x;
    for(int i=0;i<n;i++)
        if(arr[i]==x){cout<<"Found";return 0;}
    cout<<"Not Found";
}
