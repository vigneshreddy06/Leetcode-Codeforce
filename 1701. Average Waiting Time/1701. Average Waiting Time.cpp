class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double res=1;
        int start=customers[0][0];
        int end=start+customers[0][1];;
        double totalTime=end-customers[0][0];
        for(int i=1;i<customers.size();i++)
        {
             
            
            if(end>=customers[i][0])
            {
                start=end;
            }
            else
            {
                start=customers[i][0];
            }
           
            end=start+customers[i][1];
            totalTime+=end-customers[i][0];

        }
        return totalTime/customers.size();
        
    }
};