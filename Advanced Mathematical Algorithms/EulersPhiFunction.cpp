// Return phi(n): Number of non-negative 
// integers less than n coprime to n.

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

// In O(n.lglgn)
vl phi_1_to_n(lli n) 
{
    vl phi(n + 1);
    phi[0] = 0;
    phi[1] = 1;
    
    for (lli i = 2; i <= n; i++)
        phi[i] = i;

    for (lli i = 2; i <= n; i++) 
    {
        if (phi[i] == i) 
        {
            for (lli j = i; j <= n; j += i)
                phi[j] -= phi[j] / i;
        }
    }
}

// In O(n.lgn) using Divisor Sum Property.
// Divisor Sum Property:
// Sigma phi(n) such that n|d = n

vl phi_1_to_n(int n) {
    vl phi(n + 1);
    phi[0] = 0;
    phi[1] = 1;
    for (lli i = 2; i <= n; i++)
        phi[i] = i - 1;

    for (lli i = 2; i <= n; i++)
        for (lli j = 2 * i; j <= n; j += i)
              phi[j] -= phi[i];
}

// Applications:
// 1. Modular Inverse.
// 2. Euler's Theorem a^phi(m) = 1 (mod m) if gcd(a, m) == 1.












