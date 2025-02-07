#include<iostream>
using namespace std;
class node
{
    public:int data;
    node *left;
    node *right;
    node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }

    };
int count(node *root, int c)
{
    if (root == NULL)
        return c;
    if (root->left == NULL && root->right == NULL){
        return ++c;
    }
    int left = count(root->left, c);
    int right = count(root->right, c);
    return left + right;
}

int main()
{
    node *root = new node(10);
    root->left = new node(20);
    // root->left->right = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->right->left = new node(50);
    // cout << endl;
    // pre(root);s
    // cout << endl;
    // post(root);
    // cout << endl;
    // in(root);
    // cout << endl;
    int ans = count(root, 0);
    cout << ans;
}
