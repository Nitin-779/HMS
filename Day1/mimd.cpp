#include <iostream>
#include <thread>
using namespace std;
void task1(){
    cout<<"Task 1: Processing Data A" << endl;
}
void task2(){
    cout<<"Task 2: Processing Data B" << endl;
}
int main(){
    thread t1(task1);
    thread t2(task2);

    t1.join();
    t2.join();
    return 0;

}