#include <iostream>
using namespace std;
#ifndef CAR_H
#define CAR_H

class Car
{
public:
    string name;
    int year;
    
    //member function
    void display(){
        cout<<"Car name: "<<name<<endl;
        cout<<"Car year: "<<year<<endl;
    }
};
#endif