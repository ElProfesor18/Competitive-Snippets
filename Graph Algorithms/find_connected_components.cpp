lli curr = 0;
vl vec[200010];

void dfsUtil(lli u, bool visited[])
{
    visited[u] = true;
    vec[curr].pb(u);
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
        {
        	dfsUtil(i, visited);
        	curr++;
        }
    }
}

// There are |curr| connected components.
// Individual vertices can be located in vec[0]...vec[curr]