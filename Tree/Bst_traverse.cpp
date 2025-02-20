//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(vector<vector<int>> &adj) {
        vector<int>v;
        int node=adj.size()-1;
        queue<int>q;
        int visited[node+1]={0};
        q.push(0);
        visited[0]=1;
        while(q.size()>0)
        {
            int x=q.front();
            q.pop();
            v.push_back(x);
            for(int i=0;i<adj[x].size();i++)
            {
                if(!visited[adj[x][i]])
                {
                    q.push(adj[x][i]);
                    visited[adj[x][i]]=1;
                }
            }
        }
        return v;

    }
};

//{ Driver Code Starts.

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;

        // Now using vector of vectors instead of array of vectors
        vector<vector<int>> adj(V);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u); // For undirected graph, add both u->v and v->u
        }

        Solution obj;
        vector<int> ans = obj.bfsOfGraph(adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends
