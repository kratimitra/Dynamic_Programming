/*
A monkey enters into a diamond shaped two dimensional array and can jump in any of the adjacent cells down from its current position.
While moving from one cell to another, the monkey eats all the bananas kept in that cell.
The monkey enters into the array from the upper part and goes out through the lower part. 
Find the maximum number of bananas the monkey can eat.
INPUT:
2
4
7
6 4
2 5 10
9 8 12 2
2 12 7
8 2
10
2
1
2 3
1


OUTPUT:
Case 1: 63
Case 2: 5

*/

#include <bits/stdc++.h>
using namespace std;

#define codephillic__ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

typedef long long ll;
#define mod (int) 998244353
long long MOD=100000007;
#define MAXX 1001
int n;
int ban[200][200], cache[200][200];

int DP(int i, int j)
{
    if(i>=0 && i<2*n-1 && j>=0 && j<n)
    {
        if(cache[i][j]!=-1)
            return cache[i][j];
        if(ban[i][j]==0) 
            return 0;


        int res=INT_MIN;

        res=max(res, DP(i+1, j)+ban[i][j]);
        if(i<n-1) 
            res=max(res, DP(i+1, j+1)+ban[i][j]);
        else 
            res=max(res, DP(i+1, j-1)+ban[i][j]);
    
        cache[i][j]=res;
        return cache[i][j];
    }
    else 
        return 0;
  
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
    
    cin>>n;

    memset(cache , -1 ,sizeof(cache));

    memset(ban, 0, sizeof(ban));
 
    for(int i=0; i<2*n-1; i++) {
        if(i<n)
            for(int j=0; j<=i; j++)
                cin>>ban[i][j];
        else
            for(int j=0; j<2*n-i-1; j++)
                cin>>ban[i][j];
    }  
    
    cout<<"Case "<<k<<": "<<DP(0 , 0)<<endl;
        
    }
    return 0;
    


}
