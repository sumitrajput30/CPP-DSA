#include<iostream>
using namespace std;
#include<queue>
#include<stack>
void frstk(queue<int>&q,int k)
{
    stack<int>s;
    int t=0;
    while(k--)
    {
        s.push(q.front());
        q.pop();

    }
    int qs=q.size();
    while(!s.empty())
    {
        q.push(s.top());
        s.pop();
    }
    while(qs--)
    {
        q.push(q.front());
        q.pop();
    }

}

int main()
{
    queue<int>q;
    int k=2;
    q.push(9);
    q.push(3);
     q.push(1);
      q.push(7);
       q.push(6);
       frstk(q,k);
       while(!q.empty())
       {
           cout<<q.front()<<"\n";
           q.pop();
       }
}
