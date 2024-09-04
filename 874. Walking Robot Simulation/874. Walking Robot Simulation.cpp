class Solution {
public:
    string getDirection(string curDir, int turn){
        if(curDir == "+y") return turn == -2? "-x" : "+x";
        if(curDir == "-y") return turn == -2? "+x" : "-x";
        if(curDir == "+x") return turn == -2? "+y" : "-y";
        else return turn == -2? "-y" : "+y";
    }
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {

        set<pair<int,int>> obs;

        for(auto obstacle: obstacles) obs.insert({obstacle[0], obstacle[1]});

        pair<int, int> position({0, 0});
        int maxDist = 0;
        string curDir = "+y";

        for(int command: commands){
            if(command > 0){
                if(curDir == "+y"){
                    while(command--){
                        if(obs.find({position.first, position.second+1}) == obs.end()) position.second++;
                        else break;
                    }
                }
                else if(curDir == "-y"){
                    while(command--){
                        if(obs.find({position.first, position.second-1}) == obs.end()) position.second--;
                        else break;
                    }
                }
                else if(curDir == "+x"){
                    while(command--){
                        if(obs.find({position.first+1, position.second}) == obs.end()) position.first++;
                        else break;
                    }
                }
                else{
                    while(command--){
                        if(obs.find({position.first-1, position.second}) == obs.end()) position.first--;
                        else break;
                    }
                }
                maxDist = max(maxDist, position.first * position.first + position.second * position.second);
            }
            else curDir = getDirection(curDir, command);
        }
 
        return maxDist;
        
    }
};