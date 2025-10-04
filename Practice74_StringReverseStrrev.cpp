#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main() {
    char str[100];
    cin>>str;
    reverse(str,str+strlen(str));
    cout<<str;
}
