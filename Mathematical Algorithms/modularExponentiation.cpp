// Modular Exponentiation in O(log y)
lli power(lli x, lli y, lli p)  
{  
    lli res = 1;     
  
    x = x % p; 
  
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x) % p;  
   
        y = y>>1; 
        x = (x*x) % p;  
    }  
    return res;  
} 