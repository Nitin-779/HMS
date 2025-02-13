#include <iostream>
using namespace std;
int main(){
    int number;
    string sentence;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter a sentence: ";
    cin.ignore();
    getline(cin, sentence);
    cout<<"You entered: "<<number<<endl;
    cout<<"You entered: "<<sentence<<endl;
}