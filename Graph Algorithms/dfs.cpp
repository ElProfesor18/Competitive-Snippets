void dfsUtil(lli u, bool visited[])
{
    visited[u]=true;
    // cout<<u<<" ";
    
    for(auto it : adj[u])
    {
        if(!visited[it])
            dfsUtil(it, visited);
    }
}
    
void dfs()
{
    bool visited[V];
    forz(i,V) visited[i]=false;
        
    forz(i,V)
    {
        if(!visited[i])
        dfsUtil(i, visited);
    }
}