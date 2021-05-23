#include <bits/stdc++.h>
using namespace std;

#define codephillic__ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

typedef long long ll;
#define mod (int) 998244353
long long MOD=1e9+7;


#define pb push_back
#define ff first
#define ss second
#define endl "\n"



 
const int N = 100100;
map<string, int> mp;
int n, m, k;
ll a[N];
//ll b[N];
ll c[N];

void cook_here()
{
    ll n , k;
    cin>>n>>k;

    ll a[k+1];
    ll ans[k+1];
    for(ll i=1;i<=k;i++) cin>>a[i];


    ll min_a;
    memset(ans,-1,sizeof(ans));
    ans[0]=0;
    for(ll i=1;i<=k;i++){
      min_a = INT_MAX;
      for(ll j=1;j<=i;j++){
        if(a[j]!=-1){
          if(ans[i-j] != -1){
            min_a=min(min_a,a[j]+ans[i-j]);
          }
          else
            min_a=-1;
        }
      }

       ans[i] = (min_a==INT_MAX?-1:min_a);

    }

    cout<<ans[k]<<endl;

   


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
