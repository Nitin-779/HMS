// #include <iostream>
// using namespace std;
// int main(){
//     string a="Naitik";
//     string b="Aggarwal";
//     string c=a+" "+b;
//     cout<<c<<endl;
//     cout<<c.length()<<endl;    
// }

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // string greeting="Hello";
    // string name="World";

    // string message=greeting+","+name+"!";
    // cout<<message<<endl;

    // cout<<"Length: "<<message.length()<<endl;

    // int pos=message.find("World");

    // cout<<"'World' found at position: " << pos<<endl;


    // cout<<"Substring: " << message.substr(6,4)<<endl;

    // cout<<"Original message: " << message <<endl;

    // // Replace

    // message.replace(6,5,"C++");
    // cout<<message<<endl  ;

    // // Insert
    // message.insert(10," beautiful");
    // cout<<message<<endl;


    // // Erase

    // message.erase(7,10);
    // cout<<message<<endl;

    // // Transform
    string str="hello, world";
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str<<endl;
}

