#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
/* Function to get minimum number of trials needed in worst 
  case with n eggs and k floors */

int dp[11][51] ;

int solve(int e, int f){
    if( e==1 || f==1 || f==0)
    return f;
  
    if(dp[e][f] != -1)
        return dp[e][f];
        
    
    int mini = INT_MAX;
    
    for(int i=1;i<=f;i++)
    {
        int tmp= 1+ max(solve(e-1,i-1) , solve(e, f-i));
        mini=min(mini,tmp);
    }
    return dp[e][f] = mini;

}

int eggDrop(int n, int k) 
{
    // your code here
    memset(dp, -1, sizeof(dp));
    return solve(n, k);
}

// { Driver Code Starts.

int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking eggs and floors count
        int n, k;
        cin>>n>>k;

        //calling function eggDrop()
        cout<<eggDrop(n, k)<<endl;
    }
    return 0;
}
  // } Driver Code Ends
