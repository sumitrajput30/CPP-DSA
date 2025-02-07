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

    node *bst(node *root,int v)
    {
        if(root==NULL)
        {
            return new node(v);

        }
        if(v<root->data)
        {
            root->l=bst(root->l,v);
        }
        else
        {
            root->r=bst(root->r,v);

        }
        return root;
    }
    void inorder(node *root)
    {
        if(root==NULL)
            return;
        inorder(root->l);
        cout<<root->data<<" ";
        inorder (root->r);

    }

    int main()
    {

        node *root=NULL;
        int r,n;
        cout<<"How many node\n";
        cin>>r;
        for(int i=1;i<=r;i++)
        {
            cin>>n;
            root=bst(root,n);
        }
    }
