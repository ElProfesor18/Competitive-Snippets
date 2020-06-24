// Lucas Theorem to Compute nCr%p : O(p2 * Logp n)
lli nCrModpDP(lli n, lli r, lli p) 
{ 
    lli C[r+1]; 
    memset(C, 0, sizeof(C)); 
  
    C[0] = 1; 
  
    for (lli i = 1; i <= n; i++) 
    { 
        for (lli j = min(i, r); j > 0; j--) 
  
            C[j] = (C[j] + C[j-1])%p; 
    } 

    return C[r]; 
} 