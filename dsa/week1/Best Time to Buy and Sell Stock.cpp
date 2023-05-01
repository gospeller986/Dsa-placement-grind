#include <bits/stdc++.h>
using namespace std ; 
int main(){

return 0 ; 
}


// approach  profit = min till now - curr 
// max profit = max of both 


class Solution {
public:
    int maxProfit(vector<int>& prices) { 

        int mini = prices[0] ; 

        int profit = 0 ; 
        
        int max_profit = INT_MIN  ; 


        for(auto it : prices) {
            int curr = it ; 
            mini = min(mini,curr);
            profit =  curr - mini ; 
            max_profit = max(profit,max_profit);
        }


        return max_profit ;
        
    }
};