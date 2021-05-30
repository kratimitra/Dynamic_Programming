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

ll e,maxw;
ll cache[10000+10];
ll dp(ll maxw , ll n , ll *v , ll *w)
{
    
    
    
    cache[0]=0;
    for(ll i=1;i<=maxw;i++){
        for(ll j=0;j<n;j++){
            if(w[j]<=i){
                cache[i] = min(cache[i] , cache[i-w[j]] + v[j]);
            }
        }
    }

    return cache[maxw];
    



}
void cook_here()
{
    
    cin>>e>>maxw;
    maxw=maxw-e;
    
    ll n;
    cin>>n;
    ll v[n+1] , w[n+1];
    for(int i=0;i<n;i++){

        cin>>v[i]>>w[i];
    }


    for(ll i=1;i<maxw+1;i++)
        cache[i] = INT_MAX;
    
    ll res = dp(maxw ,n,v,w);
    if(res==INT_MAX)
        cout<<"This is impossible.\n";
    else
        cout<<"The minimum amount of money in the piggy-bank is "<<res<<'.'<<endl;




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
