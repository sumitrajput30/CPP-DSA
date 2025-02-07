#include<iostream>
using namespace std;
#include<queue>
int main()
{

    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    int s=q.size();
    cout<<"size="<<s<<"\n";
   // cout<<q.front();
    while(s--)
    {

        cout<<q.front()<<"\t";
        q.pop();

    }

    cout<<"\n";
    while(!q.empty())
    {
        cout<<q.front()<<"\t";
        q.pop();
    }
}
