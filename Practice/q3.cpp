#include <iostream>
using namespace std;
int main(){
    int num1,num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    if(num1%num2==0){
        cout << "The first number is multiple of second number";
    }
    else{
        cout << "The first number is not multiple of second number";
    }
}