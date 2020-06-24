bool subArraySum(lli arr[], lli n, lli sum) 
{ 
    lli curr_sum = arr[0], start = 0, i; 
  
    for (i = 1; i <= n; i++) 
    { 
        while (curr_sum > sum && start < i - 1) 
        { 
            curr_sum = curr_sum - arr[start]; 
            start++; 
        } 
   
        if (curr_sum == sum) 
        { 
            cout << "Sum found between indexes "
                 << start << " and " << i - 1; 
            return true; 
        } 
   
        if (i < n) 
            curr_sum = curr_sum + arr[i]; 
    } 
  
    cout << "No subarray found"; 
    return false; 
} 
  