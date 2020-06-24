// Graph Class.
class Graph
{
    public :
    lli V;
    list <lli> *adj;
    
    Graph(lli V)
    {
        this->V = V;
        adj = new list <lli>[V];
    }
    
    void addEdge(lli u, lli v)
    {
        adj[u].pb(v);
        adj[v].pb(u);
    }
};