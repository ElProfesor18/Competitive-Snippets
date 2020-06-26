stack <pll> st;
void add(lli new_elem)
{
	lli new_min = st.empty() ? new_elem : min(new_elem, st.top().second);
	st.push({new_elem, new_min});
}

void remove()
{ st.pop(); }

lli findMin()
{ return st.top().second; }