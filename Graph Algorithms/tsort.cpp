vector <lli> t;
void topologicalSortUtil(lli u, bool visited[], stack <lli> &st)
{
    visited[u]=true;
    
    for(auto it : adj[u])
    {
        if(!visited[it])
            topologicalSortUtil(it, visited, st);
    }
    
    st.push(u);
}

void topologicalSort()
{
    bool visited[V];
    forz(i,V) visited[i]=false;
    
    stack <lli> st;
    
    forz(i,V)
    {
        if(!visited[i])
        topologicalSortUtil(i, visited, st);
    }
    
    while(!st.empty())
    {
        // cout<<st.top()<<" ";
        t.pb(st.top());
        st.pop();
    }
    
    cout<<endl;
}
