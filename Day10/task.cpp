//Create a class of students which contains the data of roll no, marks ,name.
#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;
    int marks;

    Student(string n,int r,int m)
    {
    name=n;
    roll_no=r;
    marks=m;
    }

    int getResult(int roll_no)
    {
        return marks;
    }

};

int main(){
    Student details= Student("Rahul",1,90);
    cout<<details.name<<endl;
    cout<<details.roll_no<<endl;
    cout<<details.marks<<endl;
    cout<<details.getResult(1)<<endl;
}


