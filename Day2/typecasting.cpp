// #include <iostream>
// using namespace std;
// int main(){
//     int a=10;
//     double b=a;
//     cout<<b<<endl;
//     cout<<typeid(b).name();
// }

#include <iostream>
using namespace std;
int main(){
    double a=10.2345678;
    int b=a;
    cout<<b<<endl;
    cout<<typeid(b).name()<<endl;
    cout<<sizeof(b);
}