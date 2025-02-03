#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
int main()
{
     vector<int>v{30,5,48,48,5,9,87,6,2,57};
      for(auto &p:v)
     {
         cout<<p++<<"\t";
     }
     cout<<"\n";
       for(auto k:v)


     {
         cout<<k<<"\t";
     }
     cout<<"\n";


     sort(v.begin(),v.end(), less<int>());//ascending
     sort(v.begin(),v.end(), greater<int>());//descending

     vector<int>v2{100,430,456};
     v.swap(v2);
     for(auto p:v)
     {
         cout<<p<<"\t";
     }
     reverse(v2.begin(), v2.end());
     cout<<"\ndata of v1\n";
      for(auto p:v2)
     {
         cout<<p<<"\t";
     }
}
