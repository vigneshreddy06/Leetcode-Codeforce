class Solution {
public:

    void solve(int ind,vector<int>& nums, int m){
        int maxx = ind;
        int l = 2*ind+1;
        int r = 2*ind+2;
        if(l<m && nums[l]>nums[maxx]){maxx=l;}
        if(r<m && nums[r]>nums[maxx]){maxx=r;}
        if(maxx!=ind){swap(nums[ind],nums[maxx]);solve(maxx,nums,m);}
    }

    vector<int> sortArray(vector<int>& nums) {
        const int m = nums.size();
        for(int i=m/2-1;i>=0;--i){solve(i,nums,m);}
        for(int i=m-1;i>=0;--i){swap(nums[i],nums[0]);solve(0,nums,i);}
        return nums;
    }
};