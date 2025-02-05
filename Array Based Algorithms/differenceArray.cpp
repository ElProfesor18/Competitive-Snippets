vector<lli> initializeDiffArray(vector<lli> & A) 
{ 
    lli n = A.size(); 
    vector<lli> D(n + 1); 
    D[0] = A[0], D[n] = 0; 
    
    for (lli i = 1; i < n; i++) 
        D[i] = A[i] - A[i - 1]; 
    return D; 
} 
  
// a[l...r]: a[i] += x;
void update(vector<int>& D, int l, int r, int x) 
{ D[l] += x; D[r + 1] -= x; } 
  
// Sets the Vector A to its updated values.
void gettArray(vector<lli> & A, vector<lli>& D) 
{ 
    for (lli i = 0; i < A.size(); i++) 
    { 
        if (i == 0) 
            A[i] = D[i]; 
  
        else
            A[i] = D[i] + A[i - 1]; 
    } 
} 