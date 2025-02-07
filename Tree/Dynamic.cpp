#include<iostream>
using namespace std;
class node
{
    public:int data;
    node *l;
    node *r;
    node(int val)
    {
        data =val;
        l=NULL;
        r=NULL;

    }
};
node* createtree(node *root)
{

    int d;
    cout<<"enter value\n";
        cin>>d;
        root=new node(d);
        if(d==-1)
        {
            return NULL;

        }
        cout<<"enter value for left of"<<d<<"\n";
        root->l=createtree(root->l);
        cout<<"enter value for rightof"<<d<<"\n";
            root->r=createtree(root->r);
            return root;
}
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

    node *root=NULL;
    root=createtree(root);
    cout<<"\npreorder\n";
    preorder(root);
    cout<<"\npostorder\n";
    postorder(root);
    cout<<"\ninorder\n";
    inorder(root);

}
