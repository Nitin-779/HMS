#include <iostream>
using namespace std;
// int main(){
//     int x=10;
//     cout<<"Address of x: "<<&x<<endl;
//     cout<<"Value of x: "<<x<<endl;
//     int *p=&x;
//     cout<<"Address of p: "<<p<<endl;
//     cout<<"Value of p: "<<*p<<endl;

//     // pointer to pointer on double pointer
//     int **q=&p;
//     cout<<"Address of q: "<<q<<endl;
//     cout<<"Value of q: "<<*q<<endl;
//     cout<<"Value of *q: "<<**q<<endl;

// }

// int main(){
//     int n=10;
//     int *const p = &n;
//     int y=20;
//     p=&y; // Error: p is constant pointer

// }

void printNumbers(int arr[],int n)
{
    cout<<arr<<endl;
    cout<<&arr[0]<<endl;
    // int n=sizeof(arr)/sizeof(arr[0]);;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    cout<<arr<<endl;
    printNumbers(arr,5);
    return 0;
}
