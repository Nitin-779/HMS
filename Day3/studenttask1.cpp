#include <iostream>
using namespace std;
int main(){
    int apple, banana, orange;
    double apple_price= 1.5;
    double banana_price= 0.75;
    double orange_price= 2.0;
    cout<<"Enter the number of apples: ";
    cin>>apple;
    cout<<"Enter the number of bananas: ";
    cin>>banana;
    cout<<"Enter the number of oranges: ";
    cin>>orange;
    double price=apple*apple_price+banana*banana_price+orange*orange_price;
    cout<<"Total cost before tax: "<<price<<endl;
    cout<<"Total cost after tax: "<<price+(price)*0.05<<endl;
}