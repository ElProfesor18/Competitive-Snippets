bool isBipartite(lli src) 
{ 
    lli colorArr[V]; 
    for(lli i = 0; i < V; ++i) 
        colorArr[i] = -1; 
  
    colorArr[src] = 1; 
  
    queue <lli> q; 
    q.push(src); 
  
    while (!q.empty()) 
    { 
        lli u = q.front(); 
        q.pop(); 
  
        if (G[u][u] == 1) 
        return false;  
  
        for (int v = 0; v < V; ++v) 
        for(auto it : adj[i])           
        { 
            if (colorArr[it] == -1) 
            { 
                colorArr[it] = 1 - colorArr[u]; 
                q.push(it); 
            } 
  
            else if (colorArr[it] == colorArr[u]) 
                return false; 
        } 
    } 
   
    return true; 
} 






