vector <lli> multiSrcBfs(vector <lli> &s)
{
    vector <lli> dist(V), pred(V);
    bool visited[V];
    
    forz(i,V)
    {
        dist[i] = -1;
        pred[i] = -1;
        visited[i] = false;
    }
    
    list <lli> q;

    forz(i, src.si)
    {
        lli s = src[i];
        q.pb(s);
        dist[s]=0;
        visited[s]=true;
    }

    while(!q.empty())
    {
        lli u = q.front();
        q.pop_front();
        // cout<<u<<" ";
        
        for(auto it : adj[u])
        {
            if(!visited[it])
            {
                visited[it]=true;
                dist[it]=dist[u]+1;
                pred[it] = u;
                q.pb(it);
            }
        }
    }

    return dist;
}