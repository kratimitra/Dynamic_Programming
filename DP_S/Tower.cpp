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
int n,N,x,y,z,A[90],B[90],C[90],dp[90];
struct box{
    int h ,w , l;

};

bool cmp(struct box a , struct box b){
    return (a.w*a.l > b.w*b.l)?true:false;
}

int maxHeight(int height[] , int width[] , int length[] , int n){
    int N=3*n;

    box a[N];

    int i=0;

    for(int j=0;j<n;j++){
        a[i].h = height[j];
        a[i].w = max(width[j] , length[j]);
        a[i].l = min(width[j] , length[j]);

        i++;

        a[i].h = width[j];
        a[i].w = max(height[j] , length[j]);
        a[i].l = min(height[j] , length[j]);

        i++;

        a[i].h = length[j];
        a[i].w = max(width[j] , height[j]);
        a[i].l = min(width[j] , height[j]);

        i++;

    }


    sort(a, a+N , cmp);

    int ans[N];
    for(int i=0;i<N;i++){
        ans[i] = a[i].h;
    }

    for(int i=1;i<N;i++){
        for(int j=0;j<i;j++){
            if((a[i].w < a[j].w) and (a[i].l <a[j].l) and (ans[i] < ans[j]+a[i].h))
                ans[i] = ans[j]+a[i].h;
        }
    }

    int res=0;

    for(int i=0;i<N;i++){
        res=max(res, ans[i]);
    }

    return res;
}

void cook_here()
{
    
    
    while(1){
        cin>>n;
        if(n==0) break;   
        /*memset(A , 0 , sizeof(A));
        memset(B , 0 , sizeof(B));
        memset(C , 0 , sizeof(C));*/

                
        for(int i = 0;i<n;++i){
            cin>>x>>y>>z;

            A[i]=x;
            B[i]=y;
            C[i]=z;

            

            
        }
        cout<<maxHeight(A,B,C,n)<<endl;
    
    }

    return ;
}

int main(){
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
   // cin>>t;
    while(t--){
        cook_here();
    }
    return 0;
    


}
