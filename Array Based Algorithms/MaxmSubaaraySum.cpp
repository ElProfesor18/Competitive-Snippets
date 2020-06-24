// Maximum Subarray Sum : KADANE's Algorithm O(n)
lli maxSubArraySum(lli a[], lli size) 
{ 
    lli max_so_far = -1e17, max_ending_here = 0; 
  
    for (lli i = 0; i < size; i++) 
    { 
        max_ending_here = max_ending_here + a[i]; 
        if (max_so_far < max_ending_here) 
            max_so_far = max_ending_here; 
  
        if (max_ending_here < 0) 
            max_ending_here = 0; 
    } 
    return max_so_far; 
}