#include <bits/stdc++.h>
using namespace std ;  
class Solution { 


    bool isSafe (int r , int c , int m , int n , vector<vector<int>>& image, int original_color  ) {
        if(r >=0 && c>= 0 && r < m &&  c < n  && image[r][c] == original_color ) return true ;
        return false  ;
    }

    void dfs(int r , int c , int m , int n , vector<vector<int>>& image ,vector<vector<int>>& visited , int color , int original_color ) {
        if(r >=0 && c>= 0 && r < m &&  c < n  && image[r][c] == original_color && !visited[r][c]) {
            visited[r][c] = 1 ; 
            image[r][c] = color ;

            dfs(r+1,c,m,n,image,visited , color , original_color) ;
            dfs(r-1,c,m,n,image,visited , color , original_color) ;
            dfs(r,c+1,m,n,image,visited , color , original_color) ;
            dfs(r,c-1,m,n,image,visited , color , original_color) ;


        }
    }

public: 
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) { 
        int m = image.size() ;
        int n = image[0].size() ; 
        vector<vector<int>> visited(m,vector<int>(n)) ;
        

        int original_color = image[sr][sc] ; 

        dfs(sr,sc,m,n,image,visited,color ,  original_color ) ;


        return image ; 

        
    }
};
int main(){

return 0 ; 
}