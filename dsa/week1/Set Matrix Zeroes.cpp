// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

// Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
// Output: [[1,0,1],[0,0,0],[1,0,1]] 

#include <bits/stdc++.h>
using namespace std ; 
int main(){

return 0 ; 
} 


// used a set to store the index of the elements that are 0  
// iterated over the set and made the row and col respectively to zero 


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) { 

        int row = matrix.size() ; 
        int col = matrix[0].size() ; 

        set<pair<int,int>> s ; 

        for (int i = 0 ; i < row ; i++ ) {
            for (int j = 0 ; j < col ; j++) {
                if(matrix[i][j] == 0) {
                      s.insert({i,j}) ;
                }
            }
        }


        for(auto it : s ) {
             int r = it.first ;
             int c = it.second ;
             
             for(int i = 0 ; i < row ; i++ ){
                 matrix[i][c] =  0 ;
             }

             for(int j = 0 ; j < col ; j++) {
                 matrix[r][j] = 0 ;
             }

        }



        return ;
        
    }
};