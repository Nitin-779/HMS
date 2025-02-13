#include <iostream>
using namespace std;

class Car
{
    public:
    string name;
    int price;

    // Default Constructor
    Car()
    {
    }

    // Parameterized Constructor
    Car(string n, int p)
    {
        name = n;
        price = p;
    }
};


int main(){
    Car c1=Car("BMW", 1000000);
    // c1.name = "BMW";
    // c1.price = 1000000;
    cout<<c1.name<<endl;
    cout<<c1.price<<endl;

    Car c2;
    c2.name = "Audi";
    c2.price = 2000000;
    cout<<c2.name<<endl;
    cout<<c2.price<<endl;


    Car c3=Car("Mercedes", 3000000);
    cout<<c3.name<<endl;
    cout<<c3.price<<endl;
}