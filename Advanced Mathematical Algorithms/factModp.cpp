// Computing n! modulo p in O(n.logp)

lli factmod(lli n, lli p) 
{
    lli res = 1;
    while (n > 1) 
    {
        res = (res * ((n/p) % 2 ?  p-1 : 1)) % p;
        for (int i = 2; i <= n%p; ++i)
            res = (res * i) % p;
        n /= p;
    }
    return res % p;
}