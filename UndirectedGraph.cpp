/*

*/
#include<bits/stdc++.h>
using namespace std;
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
    cout<<endl;
    for(int e=0;e<n;e++)
    {
        cout<<"From Node: "<<e<<endl;
        for(auto it:adj[e])cout<<it<<" ";
        cout<<endl;
    }
    return 0;
}
