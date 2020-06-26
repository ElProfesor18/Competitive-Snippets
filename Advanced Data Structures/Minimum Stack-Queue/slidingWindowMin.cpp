// We can use any of the three modified queues to solve the problem. 
// The solutions should be clear: we add the first M element of the array, 
// find and output its minimum, then add the next element to the queue and 
// remove the first element of the array, find and output its minimum, etc

// Can be done in O(n lgn) using map and set.

stack <pll> s1, s2;

lli find_min()
{
	lli key = -1;
	if (s1.empty() || s2.empty()) 
    	key = s1.empty() ? s2.top().second : s1.top().second;

    else
    	key = min(s1.top().second, s2.top().second);

    return key;
}

void add(lli new_element)
{
	lli key = s1.empty() ? new_element : min(new_element, s1.top().second);
	s1.push({new_element, key});
}

void remove()
{
	if (s2.empty()) 
	{
	    while (!s1.empty()) 
	    {
	        lli element = s1.top().first;
	        s1.pop();
	        
	        lli key = s2.empty() ? element : min(element, s2.top().second);
	        s2.push({element, key});
	    }
	}

	lli remove_element = s2.top().first;
	s2.pop();
}

vl slidingWindowMin(lli arr[], lli n, lli k)
{
	vl res;
	forz(i, k)
	add(arr[i]);

	res.pb(find_min());

	for(lli i=k; i<n; i++)
	{
		remove();
		add(arr[i]);

		res.pb(find_min());
	}

	return res;
}