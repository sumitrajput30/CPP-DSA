#include<iostream>
using namespace std;
#include<queue>
#include<stack>
#include<algorithm>
void revque(queue<int>q)
{
   stack<int>s;

     while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

      while (!s.empty()) {
      cout<<s.top()<<"\t";
      s.pop();
    }

}
void krotate(queue<int>q,int k)

{

}


int main()

{

   queue<int>q;
   q.push(20);
    q.push(3);
     q.push(9);
      q.push(8);
       q.push(7);
        q.push(1);
      revque(q);
   //krotate(q,2);

}
