#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

class Math
{
    public:
    int add(int a , int b)
    {
        return a+b;
    }
    int add(int a, int b, int c)
    {
        return a+b+c;
    }
     
};
int main()
{
    Math m;
    cout << "Sum of the numbers are" << m.add(10, 20) << endl;
    cout << "Sum of the numbers are" << m.add(10, 20, 30) << endl;

    return 0;
}
