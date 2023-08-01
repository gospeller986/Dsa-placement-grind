#include <bits/stdc++.h>
using namespace std ; 

int dp[105][105] ;

int solve(int index , int remainingLength , vector<int>& price) {
	if(index == 0 ) {
	     return price[index] * remainingLength ; 
	}

	if(dp[index][remainingLength] != -1 ) return dp[index][remainingLength] ; 

	int notPick = 0 + solve(index-1 , remainingLength , price) ;
	int pick = INT_MIN ;
	int rodLength= index+1 ; 
	if(rodLength <= remainingLength) {
		pick = price[index] + solve(index, remainingLength-rodLength , price );
	}

	return dp[index][remainingLength] = max(pick,notPick) ;
}

int cutRod(vector<int> &price, int n)
{    
	 memset(dp,-1,sizeof(dp)) ;
	 return solve(n-1 , n , price) ; 
}

int main(){

return 0 ; 
}