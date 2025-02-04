// target target sum given=5
// Input:v{2,4,3,6,1,9]
//output:2,3 and 4,1

// imp

#include<bits/stdc++.h>
using namespace std;
void targetsum(vector<int>&v,int k)
{

   map<int, int>mp;

   int s,t;
   for(int i=0;i<v.size();i++)
   {
       s=v[i];
       t=k-s;
       if(mp.find(t)!=mp.end())
       {
           cout<<t<<","<<v[i]<<"\n";
       }
       mp[s]=i;
   }
    }


int main()
{

    vector<int>v{2,4,3,6,1,9};
    int k=5;
    targetsum(v,k);
}
