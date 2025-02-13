#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout<<"enter first number: ";
    cin>>a;
    cout<<"enter second number: ";
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"After swapping, first number: "<<a<<", second number: "<<b<<endl;
    return 0;
}