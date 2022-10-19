#include<bits/stdc++.h>
using namespace std;
void dfs(int node,vector<int> adj[],int *vis)
{
    vis[node]=1;
    cout<<node<<" ";
    for(auto it:adj[node])
    {
        if(!vis[it]) dfs(it,adj,vis);
    }
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> adj[n];
    int u,v;
    for(int e=0;e<m;e++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"DFS\n";
    int vis[n]={0};
    for(int e=0;e<n;e++)
    {
        if(!vis[e]) dfs(e,adj,vis);
    }
    return 0;
}
