#include<iostream>
using namespace std;
class node{

    public:int data;
    node *next;
    node (int newdata)
    {
        data =newdata;
        next = NULL;

    }
};
node *frnt;
node *rear;

class que {
    public:que()
    {
        frnt=rear =NULL;
    }

};

void insrt (int d)
{
    node *newnode=new node(d);
    newnode->data=d;
    newnode->next=NULL;
    if(rear==NULL)
    {
        frnt=rear=newnode;
        rear->next=frnt;

    }
    else
    {
        rear->next=newnode;
        rear->next=frnt;
    }
}
void del()
{
    node *tmp;
    tmp=frnt;
    if(frnt==NULL && rear==NULL)
    {
        cout<<"underflow";
    }

    //if only one node

    else if(frnt==rear)
    {
        frnt=rear=NULL;
        delete tmp;

    }

    else{
        frnt=frnt->next;
        rear->next=frnt;
        delete tmp;

    }
}
void display()
{
    node *tmp;
    tmp=frnt;
    if(frnt==NULL && rear==NULL)
    {
        cout<<"queue is empty";

    }
    else
    {
        while(tmp->next!=frnt)
        {
            cout<<tmp->data<<"\t";
            tmp=tmp->next;
        }
        cout<<tmp->data;
    }
}

int peak()
{

    if(frnt==NULL && rear==NULL)
    {
        return 0;
    }
    else
    {
        return frnt->data;

    }
}

int main()
{
    insrt(10);
     insrt(90);
      insrt(78);
       insrt(23);
        insrt(23);

        cout<<"frnt data="<<peak()<<"\n";

        display();
        del();
        cout<<"\nafter del\n";
        display();
}
