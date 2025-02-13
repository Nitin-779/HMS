#include <iostream>
using namespace std;
// int main(){
//     int arr1[]={1,2,34,56};
//     cout<<arr1[2]<<endl;

// }

// int main(){
//     int arr2[]={1,2,3,4,5};
//     int n=sizeof(arr2)/
// }
int main(){
int sum = 0;
int n=10;
int arr2[]={1,2,3,5,6};
for(int i = 0; i <10, i++) {
    sum += arr2[i];
}
int total = 10* (10 + 1) / 2;
int missingNumber = total - sum;
cout << "The missing number is: " << missingNumber << endl;
return 0;
}