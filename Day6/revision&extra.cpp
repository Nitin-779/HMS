#include <iostream>
using namespace std;
int main(){
    // auto a=10;
    // auto b=10.002;
    // cout<<typeid(a).name()<<endl;
    // cout<<typeid(b).name()<<endl;

    // unsigned int a=-10;
    // cout<<--a;
// unassigned int can only accept positive values if negative value is given then it gives some garbage value.
    // int b=10.323;
    // cout<<b;
    // int c {1231.234};
    // cout<<c;

    string a="AB1234";
    if (a.size()==6){
        for (int i=0;i<a.length();i++){
            cout<<isupper(a[i])<<" "<<isdigit(a[i])<<endl;
        }
    }
    else{
        cout<<"Invalid input";
    }
}
          