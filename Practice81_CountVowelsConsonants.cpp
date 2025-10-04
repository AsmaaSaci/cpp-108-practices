#include <iostream>
using namespace std;
int main() {
    char str[100]; int v=0,c=0;
    cin>>str;
    for(int i=0;str[i]!='\0';i++){
        char ch=tolower(str[i]);
        if(isalpha(ch)){
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }
    cout<<"Vowels="<<v<<" Consonants="<<c;
}
