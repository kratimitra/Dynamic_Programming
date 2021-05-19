/*
Each case contains seven integers a, b, c, d, e, f and n. 
All integers will be non-negative 
and 0 ≤ n ≤ 10000 and others will fit into 32-bit integers.
INPUT:
6
0 1 2 3 4 5 20
1 2 3 4 5 6 10000
3 2 1 5 0 1 9
4 12 9 4 5 6 15
9 8 7 6 5 4 3
3 4 3 2 54 5 4


OUTPUT:
Case 1: 216339
Case 2: 5333347
Case 3: 79
Case 4: 16636
Case 5: 6
Case 6: 54

*/

#include <bits/stdc++.h>
using namespace std;

#define codephillic__ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

typedef long long ll;
#define mod (int) 998244353
long long MOD=10000007;
#define MAXX 1001

 
ll a[10005];


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
    for(int k=1;k<=t;k++){

        cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5];
        ll sum = (a[0]+a[1]+a[2]+a[3]+a[4]+a[5])%MOD;
        ll n;
        cin>>n;
        for(int i=6;i<=n;i++) {
            a[i] = ((a[i-1]%MOD) + (a[i-2]%MOD) + (a[i-3]%MOD) + (a[i-4]%MOD) + (a[i-5]%MOD) + (a[i-6]%MOD)) % MOD;
        }
    
        cout<<"Case "<<k<<": "<<a[n]%MOD<<endl;
        
    }
    return 0;
    


}
