#include <iostream>
#include "Car.h"
using namespace std;
    
int main(){
    Car car=Car();
    car.name="BMW";
    car.year=2023;
    // cout<<"Car name: "<<car.name<<endl;
    // cout<<"Car year: "<<car.year<<endl;
    car.display();
    return 0;
}