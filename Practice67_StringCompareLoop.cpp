#include <iostream>
using namespace std;
int main() {
    char a[100],b[100]; int i=0,flag=0;
    cin>>a>>b;
    while(a[i]!='\0'||b[i]!='\0'){
        if(a[i]!=b[i]){flag=1;break;}
        i++;
    }
    if(flag==0) cout<<"Equal"; else cout<<"Not Equal";
}
