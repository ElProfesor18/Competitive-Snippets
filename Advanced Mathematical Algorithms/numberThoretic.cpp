// Returns a vector consisting of all prime factors of n.
vector <lli> getPrimeFactors(lli n)  
{  
    vector <lli> v;
    while (n % 2 == 0)  
    {  
        v.pb(2);
        n = n/2;  
    }  
  
    for (lli i = 3; i <= sqrt(n); i = i + 2)  
    {  
        while (n % i == 0)  
        {  
            v.pb(i);
            n = n/i;  
        }  
    }  
  
    if (n > 2)  
        v.pb(n);

    return v;
} 

lli numberOfDivisors(lli n)
{
    lli res = 1;

    vl v = getPrimeFactors(n);
    sl s; mll m;

    for(auto it : v)
    {
        s.in(it);
        mm[it]++;
    }

    for(auto it : s) res = res * mm[it];

    return res;
}

lli power(lli x,lli y){lli res=1; x=x;while(y>0){if(y&1) res=(res*x);y=y>>1;x=(x*x);}return res;} 


lli geometricProgression(lli p, lli n)
{
    lli res = (power(p, n+1) - 1)/(p-1);
}

lli sumOfDivisors(lli n)
{
    lli res = 1;

    vl v = getPrimeFactors(n);
    sl s; mll m;

    for(auto it : v)
    {
        s.in(it);
        mm[it]++;
    }  

    for(auto it : s)
    res = res * geometricProgression(it, mm[it]);
    
    return res;
}




















