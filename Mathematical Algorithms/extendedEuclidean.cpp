// Returns gcd of a, b as well as integers x and y satisfying
// ax + by = gcd(a,b) 
lli gcdExtended(lli a, lli b, lli *x, lli *y)  
{   
    if (a == 0)  
    {  
        *x = 0;  
        *y = 1;  
        return b;  
    }  
  
    lli x1, y1;  
    lli gcd = gcdExtended(b%a, a, &x1, &y1);  
  
    *x = y1 - (b/a) * x1;  
    *y = x1;  
  
    return gcd;  
}  