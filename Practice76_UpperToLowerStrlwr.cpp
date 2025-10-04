#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char str[100];
    cin>>str;
    for(int i=0;i<strlen(str);i++)
        str[i]=tolower(str[i]);
    cout<<str;
}
