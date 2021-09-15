
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
        int dp[1001];
        int cache(int pre,int cur,int A[],int n){
            if(cur==n) 
                return 0;
            if(dp[cur]!=-1) 
                return dp[cur];
            int x=0,y=0;
            if(pre==-1 || abs(A[pre]-A[cur])==1){
            x=1+cache(cur,cur+1,A,n);
            }
            y=cache(pre,cur+1,A,n);
            return dp[n]=max(x,y);
    }
    int longestSubsequence(int N, int A[])
    {
        dp[N];
        fill(dp,dp+N,-1);
        return cache(-1,0,A,N);
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int A[N];
        for(int i = 0;i < N;i++)
            cin>>A[i];
        
        Solution ob;
        cout<<ob.longestSubsequence(N, A)<<endl;
    }
    return 0;
}  // } Driver Code Ends
