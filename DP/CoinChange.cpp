/*
In a strange shop there are n types of coins of value 
A1, A2 ... An. C1, C2, ... Cn denote the number of coins of 
value A1, A2 ... An respectively. 
You have to find the number of ways you can make K using the coins.
INPUT:
2
3 5
1 2 5 3 2 1
4 20
1 2 3 4 8 4 2 1

OUTPUT:
Case 1: 3
Case 2: 9
*/

#include <bits/stdc++.h>
using namespace std;

#define codephillic__ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

typedef long long ll;
#define mod (int) 998244353
long long MOD=100000007;
#define MAXX 1001


ll cache[MAXX][51];
int coins[51];
int freq[51];
int target, n;


ll DP(int amount, int index)
{
    if(amount == 0) return 1;
    if(amount < 0) return 0;

   if (index == n)
    {
        if (amount == 0) return 1;

        return 0;
    }

    if(cache[amount][index] != -1){
        return cache[amount][index];
    }

    ll ans=0;

    for(int i=0;i<=freq[index];i++){
        ans= (ans + DP(amount - coins[index] * i , index+1)) % MOD;
    }

    cache[amount][index] = ans;
    return ans;
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
    for(int k=1;k<=t;k++){
    
    cin>>n>>target;

    memset(cache , -1 ,sizeof(cache));

    for(ll i=0;i<n;i++) cin>>coins[i];
    for(ll i=0;i<n;i++) cin>>freq[i];

    cout<<"Case "<<k<<": "<<DP(target , 0)<<endl;
        
    }
    return 0;
    


}
