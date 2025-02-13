#include <iostream>
using namespace std;
void square (int n){
    cout<<"Square of "<<n<<" is "<<n*n<<endl;
}
void cube(int n){
    cout<<"Cube of "<<n<<" is "<<n*n*n<<endl;
}
int main(){
    int n=5;
    square(n);
    cube(n);
    return 0;
}