class Solution {
public:
    int numTeams(vector<int>& ratings) {

        int n = ratings.size();

        int teams = 0;

        for(int j = 1; j<n-1;j++){

            int smallerLeft = 0;
            int largerRight = 0;
            int smallerRight = 0;
            int largerLeft = 0;

            for(int i=0;i<j;i++){

                if(ratings[i] > ratings[j]){
                    largerLeft++;
                }else{
                    smallerLeft++;
                }
                
            }

            for(int k =j+1;k<n;k++){

                if(ratings[k] > ratings[j]){
                    largerRight++;
                }else{
                    smallerRight++;
                }
                
            }

            teams += (smallerLeft * largerRight) + (largerLeft * smallerRight);
            
        }

        return teams;
        
    }
};