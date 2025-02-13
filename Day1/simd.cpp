#include <iostream>
using namespace std;
int main(){
    int a[]={1,2,3,4};
    int b[]={10,20,30,40};
    int result[4];
    for (int i=0;i<4;i++){
        result[i]=a[i]+b[i];
    }
    for (int i=0;i<4;i++){
        cout<<"Result["<<i<<"] = "<<result[i]<<endl;
    }
    return 0;
}