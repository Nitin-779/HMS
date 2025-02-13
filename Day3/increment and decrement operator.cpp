// #include <iostream>
// int main(){
//     int a=10;
//     int sum=(++a)-(a++)+(a--)+(a++)+(a);
//     std::cout<<sum;
// }

#include <iostream>
using namespace std;

int main() {
    int a = 10; // Initialize a with 10
    int term1 = ++a;  // Pre-increment: a becomes 11, term1 = 11
    int term2 = a++;  // Post-increment: term2 = 11, a becomes 12
    int term3 = a--;  // Post-decrement: term3 = 12, a becomes 11
    int term4 = a++;  // Post-increment: term4 = 11, a becomes 12
    int term5 = a;    // Current value of a = 12

    int result = term1 - term2 + term3 + term4 + term5;

    cout << "Result: " << result << endl; // Output the result
    return 0;
}
