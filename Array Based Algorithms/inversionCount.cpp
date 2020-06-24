lli merge(lli arr[], lli temp[], lli left, lli mid, lli right) 
{ 
    lli i, j, k; 
    lli inv_count = 0; 
  
    i = left; 
    j = mid; 
    k = left; 
    while ((i <= mid - 1) && (j <= right)) 
    { 
        if (arr[i] <= arr[j]) temp[k++] = arr[i++]; 
        
        else { 
            temp[k++] = arr[j++]; 
  
            inv_count = inv_count + (mid - i); 
        } 
    } 
    while (i <= mid - 1) temp[k++] = arr[i++]; 
    while (j <= right) temp[k++] = arr[j++]; 
    for (i = left; i <= right; i++) arr[i] = temp[i]; 
  
    return inv_count; 
}

lli mergeSort(lli arr[], lli temp[], lli left, lli right) 
{ 
    lli mid, inv_count = 0; 
    if (right > left) 
    { 
        mid = (right + left) / 2; 
  
        inv_count += mergeSort(arr, temp, left, mid); 
        inv_count += mergeSort(arr, temp, mid + 1, right); 
  
        inv_count += merge(arr, temp, left, mid + 1, right); 
    } 

    return inv_count; 
} 
