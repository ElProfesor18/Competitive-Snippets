// Returns a vector consisiting of all divisors of n.
vector <lli>  getDivisors(lli n) 
{ 
    vector<lli> v; 
    for (lli i=1; i<=sqrt(n); i++) 
    { 
        if (n%i==0) 
        { 
            if (n/i == i) 
                v.pb(i);
            else
            { 
                v.push_back(i);
                v.push_back(n/i); 
            } 
        } 
    } 

    sort(v.begin(), v.end());
    return v;
}