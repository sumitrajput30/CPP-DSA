#include<bits/stdc++.h>
using namespace std;
template <typename t>
class graph
{
    public:unordered_map<t,list<t>>adj;
    void addedge(t u,t v, bool direct)
    {
        adj[u].push_back(v);
        if(direct==0)
        {
             adj[v].push_back(u);
        }
    }

     void print()
    {
        for(auto x:adj)
        {
            cout<<x.first<<"->";
            for(auto y:x.second)
            {
                cout<<y<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    int vertex;
    cout<<"enter vertex\n";
    cin>>vertex;
    graph<int>g;
    for(int i=0;i<=vertex;i++)
    {
        int u,v;
        cin>>u>>v;


          g.addedge(u,v,0);  //undirected
    //g.addedge(u,v,1)   //directed
    }
      g.print();
}
