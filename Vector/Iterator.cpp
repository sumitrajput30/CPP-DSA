#include<iostream>
using namespace std;
#include<vector>
#include<iterator>
int main()
{
    vector<int>v{30,5,48,48,5,9,87,6,2,57};
    cout<<v.max_size()<<"\n";
    v.pop_back();
    for(auto p:v)
    {
        cout<<p<<"\t";
    }
    cout<<"\n";
    vector<int>::iterator it=v.begin();
    cout<<*it<<"\n";
   // cout<<*(it-3)<<"\n";
    v.insert(it+2,2000);
    {
        for(auto p:v)
        {
            cout<<p<<"\t";

        }
        v.erase(it+1);
        cout<<"\n erase\n";
        for(auto p:v)
        {
            cout<<p<<"\t";

        }
    }
}
