#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/

//GREEDY APPROACH

bool cmp(const val&a,const val&b){
return(b.second>a.second);
}

/*You are required to complete this method*/
int maxChainLen(struct val p[],int n)
{
//Your code here
    sort(p,p+n,cmp);
    int end=0,ans=1;
    for(int i=0;i<n-1;i++){ 
        if(p[i+1].first>p[end].second){
            ans++;
            end=i+1;
        }
    }
    return ans;
}

//DYNAMIC PROGRAMMING APPROACH
int maxChainLen(struct val p[],int n)
{
//Your code here
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++)
        {
            v.push_back({p[i].first,p[i].second});
        }
        
        sort(v.begin(),v.end());
        
        int dp[n];
        for(int i=0;i<n;i++) dp[i]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                if(v[j].second < v[i].first)
                {
                    dp[i]=max(dp[i],dp[j]+1);   
                }
            }
        }
        
        int ans=0;
        for(int i=0;i<n;i++) ans=max(ans,dp[i]);
               return ans;
}
