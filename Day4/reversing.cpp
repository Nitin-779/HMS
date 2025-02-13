#include <iostream>
using namespace std;

int main() {
    int rev = 0;
    int digit = 1234;
    while (digit > 0) {
        int remainder = digit % 10;
        rev = rev * 10 + remainder;
        digit = digit / 10;
    }
    cout << "Reversed Number: " << rev << endl;
    return 0;
}