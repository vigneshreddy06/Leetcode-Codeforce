class Solution {
public:
    int rangeSum(vector<int>& a, int n, int l, int r) {
        

        vector<int> p(n,0);
        p[0]=a[0];
        for(int i=1;i<n;i++)
        {
            p[i]=a[i]+p[i-1];
        }
    
        vector<int> b;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i<=j)
                {
                    int x=p[j];
                    if(i)
                     x-=p[i-1];
                 
                    b.push_back(x);
                }
            }
        }
        int mod=1e9+7;
        sort(b.begin(),b.end());
       
        int sum=0;
        l--;r--;
        for(int i=l;i<=r;i++)
        {
            sum=(sum%mod+b[i]%mod)%mod;
        }

        return sum;
          
    }
};
