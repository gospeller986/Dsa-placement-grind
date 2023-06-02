#include <bits/stdc++.h>
using namespace std ; 
class Solution {
public:

    vector<vector<int>>dir = {{0,1},{0,-1} , {1,0} , {-1,0}} ; 
    
    bool isValid(int i , int j , int m , int n ) {
        if(i >= 0 && j >= 0 && i < m && j < n) return true ;
        return false ; 
    }

    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) { 
        
        int  m = mat.size() ;
        int n = mat[0].size() ;
        queue<pair<int,int>>q ;
        vector<vector<int>> visited(m,vector<int>(n,-1)) ; 
    

        for(int i = 0 ; i < m ; i++) {
            for(int j = 0 ; j < n ; j++) {
                if(mat[i][j] == 0 && visited[i][j] == -1){
                    visited[i][j] = 0 ;
                    q.push({i,j}) ;
                } 
            }
        }


        while(!q.empty()) {
             pair<int,int> p = q.front() ;
             q.pop() ;


             for(int i = 0 ; i < 4 ; i++) {
                 int nr = p.first + dir[i][0] ;
                 int nc = p.second + dir[i][1] ; 
                 
                 if(isValid(nr,nc , m ,n ) == true && visited[nr][nc] == -1  ) {
                       q.push({nr,nc}) ;
                       visited[nr][nc] = visited[p.first][p.second] +1 ; 
                 }

             }

             

        }


        return visited ; 



        
    }
};
int main(){

return 0 ; 
}