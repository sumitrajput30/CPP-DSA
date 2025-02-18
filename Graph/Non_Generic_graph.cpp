#include<bits/stdc++.h>
using namespace std;
class graph
{
    public:unordered_map<int,list<int>>adj;
    void addedge(int u,int v,bool direct)
    {
        // 1 ->directed, 0->undirected

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
    //cout<<"enter edge\n";
    //cin>>edges;
    graph g;

    for(int i=1;i<=vertex;i++)
    {
        int u,v;
        cin>>u>>v;

    g.addedge(u,v,0);  //undirected
    //g.addedge(u,v,1)   //directed

    }
    g.print();
}
