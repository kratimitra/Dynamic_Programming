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


 
const int N = 100100;
map<string, int> mp;
int n, m, k;
ll a[N];
//ll b[N];
ll c[N];

void cook_here()
{
    while(1){
        string n;
        cin>>n;
        if(n == "0" ) break;


        ll dp[n.length()+10];
        memset(dp , 0 , sizeof(dp));
        dp[0]=1;
        dp[1]=1;

        for(int j=2;j<=n.length();j++){
            dp[j]=0;
            int i=j-1;
            //cout<<n[j]<<' '<<n[i]<<endl;
           if(n[i]!='0') 
                dp[j]+=dp[j-1];
            int x = (n[i-1]-'0')*10 + (n[i]-'0');

            if(x>=10 && x<=26)
                dp[j]+=dp[j-2];

    }

    cout<<dp[n.length()]<<endl;

    }
    

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
    //cin>>t;
    while(t--){
        cook_here();
    }
    return 0;
    


}
