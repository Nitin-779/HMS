// To find maximum element in array
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     for(int i=1;i<n;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"Maximum element in array is: "<<max<<endl;
//     return 0;
// }


// To reverse the array
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array: ";
//     cin>>n;
//     vector<int> arr(n);
//     cout<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int start=0;
//     int end=n-1;
//     while(start<end){
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
//     cout<<"Reversed array is: ";
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Count even and odd no of elements in array
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int even=0;
    int odd=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<"No of even elements in array is: "<<even<<endl;
    cout<<"No of odd elements in array is: "<<odd<<endl;
    return 0;
}







