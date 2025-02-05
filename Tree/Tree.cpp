#include<iostream>
using namespace std;
class node
{
    public:int data;
    node *l;
    node *r;
    node(int d)
    {
        data=d;
        l=NULL;
        r=NULL;
    }

    };

    void preorder(node *root)
    {
        if(root==NULL)
            return;
        cout<<root->data<<" ";
        preorder (root->l);
        preorder (root->r);
    }
void postorder(node *root)
{
    if(root==NULL)
        return;
    postorder(root->l);
    postorder(root->r);
    cout<<root->data<<" ";
}

void inorder(node *root)
{
    if (root==NULL)
        return;
    inorder(root->l);
    cout<<root->data<<" ";
    inorder(root->r);
}
int main()
{
    node *root=new node(10);
    root->l=new node(20);
    root->l->l=new node(40);
    root->r=new node(30);
    root->r->l=new node(50);
    cout<<"\npreorder\n";
    preorder(root);
    cout<<"\npostorder\n";
    postorder(root);
    cout<<"\ninorder\n";
    inorder(root);
    }
