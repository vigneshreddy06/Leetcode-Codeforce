class Solution {
public:
    int chalkReplacer(vector<int>& chalk, int k) {
        
        long long sum=0;
        for(int i=0;i<chalk.size();i++){
            sum+=chalk[i];
        } 

       k=k%sum;
       if(k==0){
        return 0;
       }
       
        int i=0;
        while(i<chalk.size()){
            if(k<chalk[i]){
                return i;
            }
            else{
                k-=chalk[i];
                i++;
            }
        }
        return 0;
    }
};