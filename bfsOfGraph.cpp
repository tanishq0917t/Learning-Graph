#include<bits/stdc++.h>
using namespace std;
void bfs(int src,vector<int> adj[],int n)
{
    int vis[n]={0};
    queue<int> q;
    q.push(src);
    while(!q.empty())
    {
        int node=q.front();
        cout<<node<<" ";
        q.pop();
        vis[node]=1;
        for(auto it:adj[node])
        {
            if(!vis[it])
            {
                q.push(it);
                vis[it]=1;
            }
        }
    }
}
int main()
{
    int n,m,u,v;
    cin>>n>>m;
    vector<int> adj[n];
    for(int e=0;e<m;e++)
    {
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    cout<<"BFS: ";
    bfs(0,adj,n);
    return 0;
}
