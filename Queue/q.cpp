#include<iostream>
#include<deque>
using namespace std;
int main()

{
    deque<int>dq;
    dq.push_back(10);
    dq.push_back(5);
    dq.push_back(2);

    while(!dq.empty())
    {
        cout<<dq.back()<<"\t";
        dq.pop_back();
    }

    cout<<"seccond\n";
     deque<int>dq1;
    dq1.push_front(10);
    dq1.push_front(5);
    dq1.push_front(2);

    while(!dq1.empty())
    {
        cout<<dq1.front()<<"\t";
        dq1.pop_front();
    }
}
