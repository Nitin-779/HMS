#include <iostream>
using namespace std;
int main(){
    int side1, side2, side3;
    cout << "Enter the side1: ";
    cin >> side1;
    cout << "Enter the side2: ";
    cin >> side2;
    cout << "Enter the side3: ";
    cin >> side3;
    if ((side1+side2>side3) && (side2+side3>side1) && (side1+side3>side2)){
        cout << "It is a triangle";
    }
    else{
        cout << "It is not a triangle";
    }
}