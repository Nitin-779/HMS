// #include <iostream>
// using namespace std;
// int main(){
//     double a=10.2345678;
//     int b=int(a);
//     cout<<"Original: "<<a<<endl<<"After: "<<b<<endl;
// }

#include <iostream>
using namespace std;
int main(){
    int a=10.23456;
    short b=a;
    cout<<b<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<sizeof(b);
}
