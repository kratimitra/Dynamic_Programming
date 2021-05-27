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
//const int N =  (int)(1 * 1e6 + 10);

/*MODULAR ARITHMETIC:
    (a+b)%M = ((a%M) + (b%M)) %M;
    (a*b)%M = ((a%M) * (b%M)) %M;
    (a-b)%M = ((a%M) - (b%M) + M) %M;
    (a/b)%M = ((a%M) * ((b^-1)%M)) %M;


*/

 
const int N = 100100;
map<string, int> mp;
int n, m, k;
ll a[N];
//ll b[N];
ll c[N];

/*
f(n) = f(n-1) + f(n-2) + g(n-2) + g(n-2) + h(n-2)
g(n) = f(n) + g(n-1)
h(n) = f(n) + h(n-2)
f(0) = 1
2. f(1) = 1
3. g(0) = f(0) + g(-1) = 1 + 0 = 1
4. g(1) = f(1) + g(0) = 1 + 1 = 2
5. h(0) = f(0) + h(-2) = 1 + 0 = 1
6. h(1) = f(1) + h(-1) = 1 + 0 = 1
*/

ll f[1002],g[1002],h[1002];
void cook_here(int n)
{
    f[0] = g[0] = h[0] =1;
    f[1] = h[1] = 1;
    g[1] = 2; 

    for(int i=2;i<=n;i++){
        f[i] = f[i-2] + f[i-1] + g[i-2] * 2 + h[i-2];
        g[i] = f[i] + g[i-1];
        h[i] = f[i] + h[i-2];
    }

    return;

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
    
    for(int t=1;t<=test;t++){
        int n;
        cin>>n;
        cook_here(n);
        cout<<t<<' '<<f[n]<<endl;

    }
    return 0;
    


}
