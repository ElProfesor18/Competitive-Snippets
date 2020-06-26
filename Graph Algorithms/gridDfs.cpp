// If arr[i][j] == '.' Then you can walk over it.
// If arr[i][j] == '#' Its a blockade.	
	
#define MAXN 1010
char arr[MAXN][MAXN];
lli n, m;
bool visited[MAXN][MAXN];

bool is_valid(lli i, lli j)
{ return i>=0 && i<n && j>=0 && j<m; }

void grid_dfs(lli i, lli j)
{
	visited[i][j] = true;

	if(is_valid(i+1, j) && !visited[i+1][j] && arr[i+1][j] == '.') dfs(i+1, j);
	if(is_valid(i-1, j) && !visited[i-1][j] && arr[i-1][j] == '.') dfs(i-1, j);

	if(is_valid(i, j+1) && !visited[i][j+1] && arr[i][j+1] == '.') dfs(i, j+1);
	if(is_valid(i, j-1) && !visited[i][j-1] && arr[i][j-1] == '.') dfs(i, j-1);
}

void solve()
{
	cin>>n>>m;
	forz(i, n) 
	{
		forz(j, m) 
		{
			cin>>arr[i][j];
			visited[i][j] = false;

			if(arr[i][j] == '#')
				visited[i][j] = true;
		}
	}
}