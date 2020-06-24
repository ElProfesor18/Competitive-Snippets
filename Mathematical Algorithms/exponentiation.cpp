// Exponentiation in O(log y)
lli power(lli x, lli y)  
{  
    lli res = 1;     
  
    x = x; 
  
    while (y > 0)  
    {  
        if (y & 1)  
            res = (res*x);  
   
        y = y>>1; 
        x = (x*x);  
    }  
    return res;  
} 