#include <iostream>
using namespace std;
class Car
{
    private:
    string name;
    int price;

public:
void setNames(string n)
{
    name = n;
}

string getNames()
{
    return name;
}
};

int main(){
    Car c1;
    c1.name  = "BMW";
    c1.price = 5000000;
    cout << "Name:" << c1.name << endl;
    cout << "Price:" << c1.price << endl;

    c1.getNames();
    cout << c1.getNames() << endl;

    Car c2;
    c2.name = "Audi";
    c2.price = 6000000;
    cout << "Name:" << c2.name << endl;
    cout << "Price:" << c2.price << endl;

    c2.getNames();
    cout << c2.getNames() << endl;
    return 0;

}