#include <iostream>
using namespace std;
int main(){
    int marks;
    cout << "Enter the marks: ";
    cin >> marks;
    if(marks>=90){
        cout << "Grade: A";
    }
    else if(marks>=75){
        cout << "Grade: B";
    }
    else if(marks>=50){
        cout << "Grade: C";
    }
    else{
        cout << "You have failed the exam";
    }
}