#include<iostream>
using namespace std;
class node
{

    public:int data;
    node *nxt; // wild class
    node(int v)

    {
        data=v;
        nxt=NULL; //nullpointer
        cout<<"assigned \n";
    }
};
int main()
{
   node *p=new node(20);
   cout<<p->data;
}
