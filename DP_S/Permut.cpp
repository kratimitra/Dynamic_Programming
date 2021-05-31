#include <bits/stdc++.h>
using namespace std;
 
#define codephillic__ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
 
typedef long long ll;
#define mod (int) 998244353
long long MOD=1e9+7;
// Big two primes
#define X 1001100011100001111ll
#define all(a) a.begin(),a.end()
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i,a,b) for (int i = a; i < b; i++)
#define bloop(i,a,b) for (int i = a ; i>=b;i--)
 
#define pb push_back
#define prec(n) fixed<<setprecision(n)
#define maxpq priority_queue<int>
#define minpq priority_queue<int, vector<int>, greater<int> >
#define inf (int)(1e18)
#define fill__(a, i) memset(a, i, sizeof(a))
#define vi vector<int>
#define ff first
#define ss second
#define endl "\n"
#define pi 3.1415926536
#define pii pair<int, int>
#define vii vector<pi>
const int MAXN = (int)((1e5) + 100);
 
ll e,maxw;
ll cache[15][100];
ll dp(ll n, ll k)
{
    
    
    if( n==0 )
        return 0;
     if( k==0 )
      return 1;
     if(cache[n][k]!=-1 )
      return cache[n][k];
     int res = 0;
     for( int i=0; i<n && k>=i ; i++ )
     {
       res += dp(n-1, k-i);
     }
    cache[n][k]=res;
 
    return res;
 
 
 
}
void cook_here()
{
    
    ll n,k;
    cin>>n>>k;
 
    memset(cache , -1, sizeof(cache));
 
    cout<<dp(n,k)<<endl;
 
 
   return ;
}
int32_t main() {
/*
#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
*/
    codephillic__;
//srand(time(NULL));
    ll t=1;
    cin>>t;
    while(t--){
        cook_here();
    }
    return 0;
    
 
 
} 
