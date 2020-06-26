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