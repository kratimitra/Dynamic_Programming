#include <bits/stdc++.h>
using namespace std;

#define MAX 100
int cache[MAX][MAX];

int dp(int a[], int i, int j, int k)
{
	
	if (i >= j)
		return 0;

	else if ((a[j] - a[i]) <= k)
		return 0;

	else if (cache[i][j] != -1)
		return cache[i][j];

	else if ((a[j] - a[i]) > k) {

		cache[i][j] = 1 + min(dp(a, i + 1, j, k),dp(a, i, j - 1, k));
	}
	return cache[i][j];
}

int min_rem(int a[], int n, int k)
{
	sort(a, a + n);

	memset(cache, -1, sizeof(cache));
	
	if (n == 1)
		return 0;
	else
		return dp(a, 0, n - 1, k);
}
int main()
{
	int n;
	cin>>n;
	int a[n];
	
	for(int i=0;i<n;i++)
	cin>>a[i];
	
	int k;
	cin>>k;
	
	cout << min_rem(a, n, k)<<endl;
	return 0;
}
