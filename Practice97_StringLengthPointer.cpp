#include <iostream>
using namespace std;
int main(){
    char *p="Hello";int len=0;
    while(*p!='\0'){len++;p++;}
    cout<<len;
}
