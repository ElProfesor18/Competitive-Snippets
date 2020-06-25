vector <lli> subsets;

// Initial call: search(0).
void search(lli k)
{
	if(k == n)
	{
		// Process Subset.
	}

	else
	{
		// Include k in the subset.
		subsets.push_back(k);
		search(k+1);

		// Do not include k in the subset.
		subsets.pop_back();
		search(k+1);
	}
}