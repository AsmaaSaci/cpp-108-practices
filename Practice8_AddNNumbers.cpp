#include <iostream>
using namespace std;

int ReadNumber() {
    int number;
    cout << "Please enter how many numbers you want to add: ";
    cin >> number;
    return number;
}

int SumNumbers(int count) {
    int sum = 0, value;
    cout << "Enter " << count << " numbers: ";
    for (int i = 0; i < count; i++) {
        cin >> value;
        sum += value;
    }
    return sum;
}

int main() {
    int n = ReadNumber();
    int result = SumNumbers(n);
    cout << "The sum is: " << result << endl;
    return 0;
}
