// Sets pre to be a prefix array of arr.
void preCompute(lli arr[], lli n, lli pre[]) 
{  
    pre[0] = arr[0]; 
    for (lli i = 1; i < n; i++)  
        pre[i] = arr[i] + pre[i - 1];     
} 
  
// Returns sum of elements in arr[i..j] 
// It is assumed that i <= j 
lli rangeSum(lli i, lli j, lli pre[]) 
{ 
    if (i == 0) 
       return pre[j]; 
  
    return pre[j] - pre[i-1]; 
} 