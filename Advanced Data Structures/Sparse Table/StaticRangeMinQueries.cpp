#define K 25
#define MAXN 2000010 
// Check Limits on MAXN, K works fine for array length upto 1e7!

lli st[MAXN][K + 1];
lli dp[MAXN+1];

void preCompute(lli array[], lli N)
{
	for (lli i = 0; i < N; i++)
	    st[i][0] = array[i];

	for (lli j = 1; j <= K; j++)
	    for (lli i = 0; i + (1 << j) <= N; i++)
	        st[i][j] = min(st[i][j-1], st[i + (1 << (j - 1))][j - 1]);

	dp[1] = 0;
	for (lli i = 2; i <= MAXN; i++)
	    dp[i] = dp[i/2] + 1;
}

lli rangeMin(lli L, lli R)
{
	lli j = dp[R - L + 1];
	lli minimum = min(st[L][j], st[R - (1 << j) + 1][j]);
    return minimum; 
}