lli findGCD(lli arr[], lli n) 
{ 
    lli result = arr[0]; 
    for (lli i = 1; i < n; i++) 
    { 
        result = gcd(arr[i], result); 
        if(result == 1) return 1; 
    } 
    return result; 
} 