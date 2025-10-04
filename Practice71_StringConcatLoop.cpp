#include <iostream>
using namespace std;
int main() {
    char a[100],b[100]; int i=0,j=0;
    cin>>a>>b;
    while(a[i]!='\0') i++;
    while(b[j]!='\0'){a[i]=b[j];i++;j++;}
    a[i]='\0';
    cout<<a;
}
