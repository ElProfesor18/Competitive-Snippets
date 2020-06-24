lli findlcm(lli arr[], lli n) 
{ 
    lli ans = arr[0]; 
    for (lli i = 1; i < n; i++) 
        ans = (((arr[i] * ans)) / 
                (gcd(arr[i], ans))); 
  
    return ans; 
} 