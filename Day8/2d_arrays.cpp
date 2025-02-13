#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int n[a][b];
    int count;
    cin>>count;
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            n[i][j]=count;
            count++;
        }
        cout<<endl;
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<3;j++){
            cout<<n[i][j]<<" ";
        }
        cout<<endl;
    }
}
