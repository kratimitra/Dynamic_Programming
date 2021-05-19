/*
A rook is a piece used in the game of chess which is played on a board of square grids. 
A rook can only move vertically or horizontally from its current 
position and two rooks attack each other if one is on the path of the other. 
given two numbers n and k, your job is to determine 
the number of ways one can put k rooks on an n x n chessboard
so that no two of them are in attacking positions.

INPUT:
8
1 1
2 1
3 1
4 1
4 2
4 3
4 4
4 5


OUTPUT:
Case 1: 1
Case 2: 4
Case 3: 9
Case 4: 16
Case 5: 72
Case 6: 96
Case 7: 24
Case 8: 0

*/

#include <bits/stdc++.h>
using namespace std;

#define codephillic__ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

typedef long long ll;
#define mod (int) 998244353
long long MOD=100000007;
#define MAXX 1001


ll n,k;

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
    for(int K=1;K<=t;K++){
    
    cin>>n>>k;

    unsigned long long int ans=1;

    for(ll i=1;i<=k;i++){
        ans=ans*n*n;
            ans=ans/i;
            n--;
    }

    
    cout<<"Case "<<K<<": "<<ans<<endl;
        
    }
    return 0;
    


}
