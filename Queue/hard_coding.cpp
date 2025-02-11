#include<iostream>
using namespace std;
class node
{
   public:int data;
   node *nxt;
   node (int v)
   {
       data=v;
       nxt=NULL;
   }
};
class myque
{
    public:node *frnt, *rear;
    public:myque()

    {
       frnt=NULL;
       rear=NULL;

    }
    void qpush(node *r,int v)
    {
        node *n=new node(v);
        if(frnt==NULL)
        {
            frnt=n;
            rear=n;
        }
        rear->nxt=n;
        rear=n;
    }
    int qpeek()
    {
        if(frnt==NULL)
        {
            cout<<"There is no data";
        }
        return frnt->data;

    }
    bool isempty()
    {
        if(frnt==NULL)
        {
            return true;
        }
         return false;
    }
};


int main()
{

    node *n=NULL;
    myque q;
    q.qpush (n,10);
    q.qpush (n,30);
    q.qpush (n,4);
    q.qpush (n,5);
    cout<<q.qpeek()<<"\n";

    if(q.isempty())
    {
        cout<<"Q is empty";
    }
    else
    {

        cout<<"Q is not empty";
    }

}
