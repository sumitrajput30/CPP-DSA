#include<iostream>
using namespace std;
class node
{

    public:int data;
    node *nxt; // wild class
    node(int v)

    {
        data=v;
        nxt=NULL;
    }

};
int insert_tail(node * &h, int v)
{
    node *n=new node(v);
    if (h==NULL)
    {
        h=n;
        return 0;
    }
    node *tmp=h;
    while(tmp->nxt!=NULL)
    {
        tmp=tmp->nxt;
    }
}
    void show (node *h)
    {
        node *tmp=h;
        while(tmp!=NULL)
        {
            cout<<tmp->data<<"\t";
            tmp=tmp->nxt;
        }
    }


int main()
{
    node *h=NULL;
    insert_tail(h,20);
    insert_tail(h,21);
    insert_tail(h,80);
    show(h);
    cout<<"n insert at head\n";

}

