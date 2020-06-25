// d1 for odd length palindromic substrings.
// d2 for even length palindromic substrings
vector<lli> d1(n, 0), d2(n, 0);

void manacher(string s)
{
	for (lli i = 0, l = 0, r = -1; i < n; i++) {
	    lli k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);
	    while (0 <= i - k - 1 && i + k < n && s[i - k - 1] == s[i + k]) {
	        k++;
	    }
	    d2[i] = k--;
	    if (i + k > r) {
	        l = i - k - 1;
	        r = i + k ;
	    }
	}

	for (lli i = 0, l = 0, r = -1; i < n; i++) {
	    lli k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);
	    while (0 <= i - k && i + k < n && s[i - k] == s[i + k]) {
	        k++;
	    }
	    d1[i] = k--;
	    if (i + k > r) {
	        l = i - k;
	        r = i + k;
	    }
	}
}