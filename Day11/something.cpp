#include<iostream>
using namespace std;

class Student{
    private:
    string *name;

    public:
    Student(string n){
        name = new string(n);
    }

    ~Student(){//destructor
        delete name;
        name = nullptr;
    }

    void checkMemory(){
        if(name == nullptr){
            cout<<" memory freed! "<<endl;
        }
        else{
            cout<<"memory not freed!"<<endl;
        }
    }
};

int main(){
    Student s1("Alice");
    s1.checkMemory();
    s1.~Student();
    s1.checkMemory();
}