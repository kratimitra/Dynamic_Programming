#include <bits/stdc++.h>
using namespace std;

#define ll long long int
class Solution{
	vector<vector<ll>> cache;
    ll dp(int cost[], int N, int w, int n)
	{
	    if(w<0) return 1e9;
	    if(w==0) return 0;
	    if(n<=0) return 1e9;
	    
	    if(cache[w][n]!=-1)
	    return cache[w][n];
	    
	    return cache[w][n] = min(cost[n-1]+dp(cost,N,w-n,n) , dp(cost,N,w,n-1));
	}
  
  
	public:	
	
	int minimumCost(int cost[], int N, int W) 
	{ 
        // Your code goes here
        
        cache = vector<vector<ll>> (W+1,vector<ll>(N+1,-1));
        
        for(int i=0;i<N;i++)
        {
            if(cost[i]==-1) 
                cost[i]=1e9;
            
        }
        
        ll ans=dp(cost, N, W, N);
        
        if(ans>=1e9)
        return -1;
        
        return ans;
	} 
};

int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;

        int a[n];

        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minimumCost(a, n, w) << "\n";
	     
    }
    return 0;
}  
