 #include<iostream>
using namespace std;
#define n 5
class stacks
{
    public: int *arr, top;
    stacks()
    {
      arr=new int [n];
      top=-1;
    }
    void push(int a)
    {
        if(top==n-1)
        {
            cout<<"overflow\n";
            return;
        }
        top++;
        arr[top]=a;
    }
    void pop()
    {
        if(top==-1)
        {

        cout<<"underflow\n";

        return;
        }
        top--;
    }
    int tops()
    {
        return arr[top];
    }
};
int main()
{

    stacks st;
    st.push(1);
     st.push(2);
      st.push(3);
       st.push(4);
        st.push(5);
        cout<<st.tops()<<"\n";
        st.pop();
        cout<<st.tops();
}
