// Returns the solution of ax = 1 mod(m).
lli gcdExtended(lli a, lli b, lli *x, lli *y) 
{ 
    if (a == 0) 
    { 
        *x = 0, *y = 1; 
        return b; 
    } 
  
    lli x1, y1;  
    lli gcd = gcdExtended(b%a, a, &x1, &y1); 
  
    *x = y1 - (b/a) * x1; 
    *y = x1; 
  
    return gcd; 
}

lli modInverse(lli a, lli m) 
{ 
    lli x, y; 
    lli g = gcdExtended(a, m, &x, &y); 
    if (g != 1) 
        return -1;

    else
    { 
        lli res = (x%m + m) % m; 
        return res;
    } 
} 
