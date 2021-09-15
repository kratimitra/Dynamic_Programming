using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++) {
            cin>>a[i];
        }
        int k;
        cin>>k;
        sort(a,a+n);
        int i=n-1;
        int count=0;
        while(i>0)
        {
            if(a[i]-a[i-1]<k) {
                    count+=a[i]+a[i-1];
                    i-=2;
                }
                else i--;
            
        }
        cout<<count<<endl;
        
    }
    return 0;
    }
    
