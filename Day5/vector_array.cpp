#include <iostream>
using namespace std;
#include <vector>
int main(){
    // vector<int> vec;
    // vec.assign(5,10);
    // for (int num:vec){
    //     cout<<num<<" "<<endl;
    // }
    
    // vector<int> vec2={5,7,8,6,7};
    // cout<<"Element at index 2:"<<vec2.at(2)<<endl;

    // vector<int> vec3={1,2,3,4,5};
    // cout<<"First element: "<<vec3.front()<<endl;
    // cout<<"Last element: "<<vec3.back()<<endl;

    // vector<int> vec4={1,2,3,4,5};
    // vec4.push_back(6);
    // for (int num:vec4){
    //     cout<<num<<" "<<endl;
    // }

    // vector<int> vec5={1,2,3,4,5};
    // vec5.pop_back();
    // for (int num:vec5){
    //     cout<<num<<" "<<endl;
    // }

    // vector<int> vec6={1,2,3,4,5};
    // vec6.insert(vec6.begin(),0);
    // for (int num:vec6){
    //     cout<<num<<" "<<endl;
    // }

    // vector<int> vec7={1,2,3,4,5};
    // vec7.erase(vec7.begin());
    // for (int num:vec7){
    //     cout<<num<<" "<<endl;
    // }

    // vector<int> vec8={1,2,3,4,5};
    // vec8.clear();
    // cout<<"Size: "<<vec8.size()<<endl;

    // vector<int> vec9={1,2,3,4,5};
    // vector<int> vec10={6,7,8,9,10};
    // vec9.swap(vec10);
    // for (int num:vec9){
    //     cout<<num<<" "<<endl;
    // }

    // for (int num:vec10){
    //     cout<<num<<" "<<endl;
    // }
    
    // return 0;
    
    //Size
    vector <int> vec11={1,2,3,4,5};
    cout<<"Size: "<<vec11.size()<<endl;

    //Capacity
    vector <int> vec12={1,2,3,4,5};
    cout<<"Capacity: "<<vec12.capacity()<<endl;

    //Max size
    vector <int> vec13={1,2,3,4,5};
    cout<<"Max size: "<<vec13.max_size()<<endl;

    //Data
    vector <int> vec14={1,2,3,4,5};
    cout<<"Data: " <<vec14.data()<<endl;

    //Reserve
    vector <int> vec15={1,2,3,4,5};
    vec15.reserve(10);
    cout<<"Capacity after reserve: "<<vec15.capacity()<<endl;

    //Resize
    vector <int> vec16={1,2,3,4,5};
    vec16.resize(10);
    cout<<"Size after resize: "<<vec16.size()<<endl;



}
