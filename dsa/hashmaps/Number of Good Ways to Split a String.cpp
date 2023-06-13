#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    int numSplits(string s) { 

         map<char,int>m1 ;
         map<char,int>m2 ; 

         for(int i = 0 ; i < s.length() ; i++) {
              m1[s[i]]++ ;
         }

         int count = 0 ; 

         for(int i = 0 ; i < s.length() ; i++) {  

              m1[s[i]]--;

              if(m1[s[i]] == 0) m1.erase(s[i]) ;


              m2[s[i]]++;

              if(m1.size() == m2.size()) count++ ;



         }

         return count ;
        
    }
};


int main(){

return 0 ; 
}