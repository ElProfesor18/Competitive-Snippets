// Cycle Detection in a Directed Graph

bool isCyclicUtil(lli v, bool visited[], bool recStack[]) 
{ 
    if(visited[v] == false) 
    { 
        visited[v] = true; 
        recStack[v] = true; 
   
        for(auto it = adj[v].begin(); it != adj[v].end(); it++) 
        { 
            if ( !visited[*it] && isCyclicUtil(*i, visited, recStack) ) 
                return true; 
            else if (recStack[*it]) 
                return true; 
        } 
  
    } 

    recStack[v] = false;  
    return false; 
} 
  
bool isCyclic() 
{ 
    bool visited[V]; 
    bool recStack[V]; 
    for(lli i = 0; i < V; i++) 
    { 
        visited[i] = false; 
        recStack[i] = false; 
    } 
  
    for(lli i = 0; i < V; i++) 
        if (isCyclicUtil(i, visited, recStack)) 
            return true; 
  
    return false; 
} 