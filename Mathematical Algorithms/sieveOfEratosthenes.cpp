// Returns a set consisting of all primes <= n. O(nlglgn)
set <lli> sieve(lli n) 
{ 
    set <lli> res;
    bool prime[n+1]; 
    memset(prime, true, sizeof(prime)); 
  
    for (lli p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (lli i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
    } 
   
    for (lli p=2; p<=n; p++) 
       if (prime[p]) 
          res.insert(p);

    return res;
} 