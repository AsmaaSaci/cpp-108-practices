#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream f("data.txt");
    f<<"Hello File";
    f.close();
}
