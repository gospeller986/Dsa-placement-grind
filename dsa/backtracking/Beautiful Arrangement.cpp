#include <bits/stdc++.h>
using namespace std ; 


class Solution {
 public:
    int count = 0 ;
    
    void beautiful(vector<int>&v , int index) {

        if(index == v.size()){
              count++;
              return ;
        } 
         
         for (int i = index ; i < v.size() ; i++ ){
             swap(v[index] ,v[i]);
             if( (v[index] % (index+1) == 0 ) || ((index+1)%v[index] == 0) ){
                 beautiful(v,index+1) ;
             }
             swap(v[index] ,v[i]);
         }


    }

    int countArrangement(int n) { 

        vector<int>v(n,0) ;

        for(int i = 0 ; i < n ; i++) {
             v[i] = i+1 ;
        } 

         beautiful(v , 0 );

         return count ;
        
    }
}; 

int main(){

return 0 ; 
}