#include <bits/stdc++.h>
using namespace std ; 

int getMinOperations(string series) {
    int n = series.length();
    int left = 0;
    int right = 1;
    int operationCount = 0;

    while (right < n) {
        if (series[right] == series[left]) {
            // Found adjacent nodes of the same character
            right++;
        } else {
            // Disconnect the nodes between left and right
            int nodesToRemove = right - left - 1;
            operationCount += (nodesToRemove > 0) ? 1 : 0;
            left = right;
            right++;
        }
    }

    // Handle any remaining nodes at the end
    int nodesToRemove = right - left - 1;
    operationCount += (nodesToRemove > 0) ? 1 : 0;

    return operationCount;
}

int main(){ 

    string series = "abcddcba" ;
    int n = 4 ; 

    int ans = getMinOperations(series) ;

    cout << ans << endl ;

return 0 ; 
}