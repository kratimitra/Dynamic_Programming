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

//
int gcd(int a, int b) { if (a == 0) return b; return gcd(b % a, a);}
int max(int a, int b) {if (a > b) return a; else return b;}
int min(int a, int b) {if (a < b) return a; else return b;}
void prl(int x) {cout << x << endl;}
// typedef tree<pii, null_type, less<pii>, rb_tree_tag, tree_order_statistics_node_update> Set;
//bool isPrime(int N){ for(int i=2;i*i<=N;++i){if(N%i==0) return false;}return true;}
int cbrt(int x) { int lo = 1, hi = min(2000000ll, x); while (hi - lo > 1) {int mid = (lo + hi) / 2; if (mid * mid * mid < x) {lo = mid;} else hi = mid;} if (hi * hi * hi <= x) return hi; else return lo;}
const int dx[4] = { -1, 1, 0, 0};
const int dy[4] = {0, 0, -1, 1};
int XX[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
int YY[] = { -1, 0, 1, -1, 1, -1, 0, 1 };


ll n;
ll dp[10001];

struct order{
    int start,end,profit;


};

bool comp(order o1 , order o2){
    return (o1.end < o2.end);
}

ll findMax(order a[] , int n){

    if(n==1) return a[n-1].profit;

    if(dp[n-1]!=-1) return dp[n-1];

    ll res=0;

    ll inc = a[n-1].profit;

    ll i = -1;

    for(ll j=n-1;j>=0;j--){
        if(a[j].end<=a[n-1].start)
        {
            i=j;
            break;
        }

    }

    if(i!=-1) inc+=findMax(a,i+1);

    ll exc=findMax(a,n-1);

    res= max(inc , exc);
    dp[n-1] = res;
    return res;

} 

void cook_here()
{
        cin>>n;
        memset(dp , -1 , sizeof(dp));
        order arr[n];

        for(ll i=0;i<n;i++){
            ll s , e , p;
            cin>>s>>e>>p;

            arr[i].start = s;
            arr[i].end = s+e;
            arr[i].profit = p;
        }

        sort(arr , arr+n , comp);

        cout<<findMax(arr , n) <<endl;

    

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
