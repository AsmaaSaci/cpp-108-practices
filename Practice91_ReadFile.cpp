#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ifstream f("data.txt");
    string s;
    while(getline(f,s)) cout<<s<<endl;
    f.close();
}
