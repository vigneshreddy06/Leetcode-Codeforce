class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start_node, int end_node) {
        vector<pair<int,double>> adj[n];
        for(int i=0; i<edges.size(); i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        vector<double> prob(n,0.0);
        queue<pair<double,int>> q;

        q.push({1.0,start_node});
        prob[start_node] = 1.0;

        while(!q.empty()){
            int node = q.front().second;
            double currProb = q.front().first;
            q.pop();

            for(const auto & adjNode : adj[node]){
                int adj_node = adjNode.first;
                double adj_prob = adjNode.second;
                if(prob[adj_node] < (adj_prob * currProb)){
                    prob[adj_node] = (adj_prob * currProb);
                    q.push({prob[adj_node],adj_node});
                }
            }
        }
        return prob[end_node];
    }
};