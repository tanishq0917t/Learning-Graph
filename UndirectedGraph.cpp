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
/*
This graph is 0-Based Indexed Undirected Graph
Lets take an Example

    0------1
    |      |
    3------2
     \    /
        4
        
So for Node-0
 0->1
 0->3
So for Node-1
 1->2
 1->0
So for Node-2
 2->1
 2->3
 2->4
So for Node-3
 3->0
 3->2
 3->4
So for Node-4
 4->2
 4->3
*/
