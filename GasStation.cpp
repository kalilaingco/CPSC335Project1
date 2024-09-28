class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int Gas = 0;
        int Cost = 0;
        for(int i=0 ; i< gas.size(); i++){ //add up all elements in array gas and cost
            Gas = Gas + gas[i];
            Cost = Cost + cost[i];
            
        }
        if(Cost > Gas){ //if cost is more than gas, no solution possible so return -1
            return -1;
        }
        else{
        int MaxProfit = 0;
        for (int i = 0; i< gas.size(); i++){   //find starting city that gives most gas per distance ratio
            int Profit = gas[i] - cost[i];  
            if (Profit > MaxProfit){
                MaxProfit = i;
            }

        }
        return MaxProfit;
        }
    }
};
