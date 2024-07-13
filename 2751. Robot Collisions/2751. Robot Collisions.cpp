class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        return a[0]<=b[0];
    }
    vector<int> survivedRobotsHealths(vector<int>& positions, vector<int>& healths, string directions) {   
    vector<vector<int>> vp,p;  
    for(int i=0;i<positions.size();i++){
       vp.push_back({positions[i],healths[i],directions[i]=='L'});  // L==1 and R==0
    } 
    sort(vp.begin(),vp.end());
    for(int i=0;i<vp.size();i++){
        if(p.size() and !p.back()[2] and vp[i][2]){ 
         while(p.size() and !p.back()[2] and vp[i][1]>p.back()[1]){
                p.pop_back(); 
                vp[i][1]--;
            }
            if(p.size() and !p.back()[2] and vp[i][1]==p.back()[1]){
                p.pop_back(); 
            } else if(p.size()==0 or p.back()[2]){
                p.push_back(vp[i]); 
            } else if(p.size() and !p.back()[2] and vp[i][1]<p.back()[1]){
                p.back()[1]--;
            }
        } else {
             p.push_back(vp[i]);  
        }
    }
    map<int,int> kp;
    for(int i=0;i<p.size();i++){
        kp[p[i][0]]=p[i][1];
    }
    vector<int> a;
    for(auto it:positions){
        if(kp[it]){
            a.push_back(kp[it]);
        }
    }
    return a;
    }
};