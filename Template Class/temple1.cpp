#include<iostream>
using namespace std;
template<typename cyb1, typename cyb2>
class bhopal
{
    cyb1 a;
    cyb2 b;

    public:bhopal(cyb1 x, cyb2 y)
    {
        a=x;
        b=y;
        cout<<a+b;
    }
};
int main()
{
    bhopal<int, double > obj(6,8.6);
}
