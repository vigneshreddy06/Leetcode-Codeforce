class Solution {
public:
    int minimumDeletions(string s) {
        vector<pair<int,int>>v1,v2;
        int c1=0,c2=0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a')
            {
                c1++;
            }
            else{
                c2++;
            }
            v1.push_back({c1,c2});
        }
        int ans=INT_MAX;
        for(int i=0;i<s.length()-1;i++)
        {
            ans=min(ans,v1[i].second+c1-v1[i].first);
        }
        ans=min(ans,c2); 
        ans=min(ans,c1); 
        return ans;
    }
};