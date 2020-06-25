void set_kth_bit(int* x, int k)
{ x = x | (1<<k); return x; }

void unset_kth_bit(int* x, int k)
{ x = x & ~(1<<k); return x; }

void invert_kth_bit(int* x, int k)
{ x = x ^ (1<<k); return x; }

void is_power_of_two(int x)
{ return x & (x-1) == 0; }

// The following code goes through
// the subsets of a n-element set 
// with exactly k elements.
void process_ksubset()
{
	for(int b=0; b<(1<<n); b++)
	{
		if(__builtin_popcount(b) == k)
		{
			// Process Subset b.
		}
	}
}

// The following code goes through 
// all the subsetsof a n-element set.
void process_subsets()
{
	for(int b=0; b<(1<<n); b++)
	{
		// Process Susbset b.
	}
}