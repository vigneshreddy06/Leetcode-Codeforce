class Solution:
    def averageWaitingTime(self, customers: List[List[int]]) -> float:
        currentTime = 0
        totalwaitTime = 0
        
        for customer in customers:
            arrival, time = customer
            
            if currentTime < arrival:
                currentTime = arrival
                
            waitTime = currentTime + time - arrival
            totalwaitTime += waitTime
            
            currentTime += time
        
        return totalwaitTime / len(customers)
