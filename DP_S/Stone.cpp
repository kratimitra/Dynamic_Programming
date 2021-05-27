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

ll n,m;
ll a[105][105];
ll dp[105][105];

ll cache(int i , int j)
{
    if(i<0 || i>=n || j<0 || j>=m){
        return -1;
    }
    if(i==n-1)
        return a[i][j];

    if(dp[i][j] != -1)
        return dp[i][j];
    ll res = 0;
    res = res + a[i][j] + max({cache(i+1,j-1) , cache(i+1,j) , cache(i+1,j+1)});

    return dp[i][j]=res;
}
void cook_here()
{
        cin>>n>>m;
        memset(dp,-1,sizeof(dp));

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        ll ans=0;
        for(int i=0;i<m;i++){
            ans = max(ans , cache(0,i));
        }

        cout<<ans<<endl;


    

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
    ll test=1;
    cin>>test;
    
    while(test--){
        cook_here();
    }
    
    return 0;
    


}
