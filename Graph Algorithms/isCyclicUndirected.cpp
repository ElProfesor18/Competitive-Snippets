// Cycle Detection in a Undirected Graph

bool isCyclicUtil(lli v, bool visited[], lli parent) 
{ 
    visited[v] = true; 
  
    for (auto it = adj[v].begin(); it != adj[v].end(); it++) 
    {  
        if (!visited[*it]) 
        { 
           if (isCyclicUtil(*it, visited, v)) 
              return true; 
        } 
  
        else if (*it != parent) 
           return true; 
    } 
    return false; 
} 
  
bool isCyclic() 
{ 
    bool visited[V]; 
    for(lli i = 0; i < V; i++) 
        visited[i] = false; 
  
    for(lli u = 0; u < V; u++) 
        if (!visited[u]) 
          if (isCyclicUtil(u, visited, -1)) 
             return true; 
  
    return false; 
}