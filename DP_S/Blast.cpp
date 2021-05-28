#include <bits/stdc++.h>
using namespace std;

#define codephillic__ ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

typedef long long ll;

ll cache[2005][2005];


ll dp(char *s1,char *s2 ,int i , int j , int k)
{
    if(i==-1 && j == -1)
        return 0;

    if(i==-1 || j==-1){
        int l=max(i,j);
        return k*(l+1);
    }
    
    if(cache[i][j] != -1)
        return cache[i][j];
    cache[i][j] = 0;
    ll d=s1[i]-s2[j];
    
    d=abs(d);
    
    ll res=min(d+dp(s1,s2,i-1,j-1,k),k+min(dp(s1,s2,i-1,j,k),dp(s1,s2,i,j-1,k)));
    
    cache[i][j] = res;

    return res;

}
void cook_here()
{
       int n,m;
       char s1[2005],s2[2005];
       int k;
       cin>>s1;
       cin>>s2;
       cin>>k;
       memset(cache , -1,sizeof(cache));
       n=strlen(s1);
       m=strlen(s2);

       
       cout<<dp(s1,s2,n-1,m-1,k);

    

}
int main() {
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
    //cin>>test;
    
    while(test--){
        cook_here();
    }
    
    return 0;
    


}
