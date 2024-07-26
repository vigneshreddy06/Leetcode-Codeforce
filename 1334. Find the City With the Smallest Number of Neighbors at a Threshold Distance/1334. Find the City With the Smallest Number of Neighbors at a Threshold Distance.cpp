class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> distGraph(n, vector<int>(n, INT_MAX));
        
        for (int city = 0; city < n; ++city) {
            distGraph[city][city] = 0; 
        }

        for (auto& edg : edges) {
            distGraph[edg[0]][edg[1]] = edg[2];
            distGraph[edg[1]][edg[0]] = edg[2];
        }

        for (int intermediateCity = 0; intermediateCity < n; ++intermediateCity) {
            for (int firstCity = 0; firstCity < n; ++firstCity) {
                for (int secondCity = 0; secondCity < n; ++secondCity) {
                    if (distGraph[firstCity][intermediateCity] != INT_MAX &&
                        distGraph[intermediateCity][secondCity] != INT_MAX) {
                        distGraph[firstCity][secondCity] = min(
                            distGraph[firstCity][secondCity],
                            distGraph[firstCity][intermediateCity] + distGraph[intermediateCity][secondCity]
                        );
                    }
                }
            }
        }

        int minReach = INT_MAX, answerCity = -1;

        for (int srcCity = 0; srcCity < n; ++srcCity) {
            int srcCityReach = 0;
            for (int destCity = 0; destCity < n; ++destCity) {
                if (srcCity != destCity && distGraph[srcCity][destCity] <= distanceThreshold) {
                    srcCityReach++;
                }
            }
            if (srcCityReach <= minReach) {
                minReach = srcCityReach;
                answerCity = srcCity;
            }
        }

        return answerCity;
    }
};