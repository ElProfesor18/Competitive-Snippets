// All Operations work on an average of O(1) time complexity.
// DSU works with union by rank and path compression heuristics.
lli parent[200010];
lli rr[200010];

void make_set(lli v)
{
    parent[v]=v;
    rr[v]=0;
}

lli find_set(lli v)
{
    if(v == parent[v]) return v;
    return parent[v] = find_set(parent[v]);
}

void union_sets(lli a, lli b)
{
    a=find_set(a);
    b=find_set(b);
    
    if(a!=b)
    {
        if(rr[a]<rr[b])
        {
            lli t=a;
            a=b;
            b=t;
        }
        
        parent[b]=a;
        
        if(rr[a]==rr[b])
        rr[a]++;
    }
}