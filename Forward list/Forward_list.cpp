#include<iostream>
using namespace std;
#include<forward_list>
#include<algorithm>
int main()
{

    forward_list<int>f1{3,5,1,2,6,8};
    for(auto p:f1)
    {
        cout<<p<<"\t";
    }
    f1.reverse();
    cout<<"after reverse\n";
    for(auto p:f1)
    {
        cout<<p<<"\t";

    }
     forward_list<int>f2;
     f2.push_front(200);
     f2.push_front(100);
     f2.push_front(300);
     f2.push_front(400);
     f2.push_front(500);
     cout<<"\n";
     for(auto p:f2)
     {
         cout<<p<<"\n";
     }
     cout<<"remove\n";
     f2.remove(300);
     f2.remove_if();
     for(auto p:f2)
     {
         cout<<p<<"\n";
     }
    /* f2.pop_front();
     cout<<"\n after delete\n";
     for(auto p:f2)
     {
         cout<<p<<"\n";
     }*/


      forward_list<int>f3;
     f3.push_front(200);
     f3.push_front(100);
     f3.push_front(300);
     f3.push_front(400);
     f3.push_front(500);
     cout<<"\n";
     for(auto p:f3)
     {
         cout<<p<<"\n";
     }
     cout<<"after merge\n";
     f2.sort();
     f3.sort();
     f2.merge(f3);

       for( auto p:f2)
     {
         cout<<p<<"\n";
     }

     for( auto p:f3)
     {
         cout<<p<<"\n";
     }

    cout<<"after merge\n";

     f3.unique();
     cout<<"\n unique data \n";
       for( auto p:f3)
     {
         cout<<p<<"\n";
     }

}

