#include <iostream>
using namespace std;
int search(int arr[],int n,int x){
    if(n==0) return 0;
    if(arr[n-1]==x) return 1;
    return search(arr,n-1,x);
}
int main() {
    int n,x,arr[100];
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    cin>>x;
    if(search(arr,n,x)) cout<<"Found"; else cout<<"Not Found";
}
