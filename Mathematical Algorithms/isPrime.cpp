// Primality Test
bool isPrime(lli n)
{
    if(n==2) return true;
    if(n%2==0) return false;
    for(lli i=3; i<=sqrt(n); i+=2)	if(n%i==0) return false;
    return true;
}