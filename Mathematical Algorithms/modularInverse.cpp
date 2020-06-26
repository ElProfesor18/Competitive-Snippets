// Solution to the linear congruence ax = 1 (mod m)
// Exists iff gcd(a, m) == 1.

lli extended_euclidean(lli a, lli b, lli *x, lli *y)  
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

void modInverse(lli a, lli m)
{
	lli x, y;
	lli g = extended_euclidean(a, m, x, y);
	
	if (g != 1) 
	{
	    cout << "No solution!";
	}
	
	else 
	{
	    x = (x % m + m) % m;
	    cout << x << endl;
	}
}

// Finding Modular Inverse Using Euler's Theorem
// We know a^(phi(m)) = 1 mod(m) when gcd(a, m) =1;
// => a^-1 = a^(phi(m)-1).

lli power(lli x,lli y){lli res=1; x=x;while(y>0){if(y&1) res=(res*x);y=y>>1;x=(x*x);}return res;} 


lli phi(lli n) 
{
    lli result = n;
    for (lli i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) {
            while (n % i == 0)
                n /= i;
            result -= result / i;
        }
    }
    
    if (n > 1)
        result -= result / n;
    return result;
}

void modInverse(lli a, lli m)
{
	lli key = phi(m)-1;
	return power(a, key);
}