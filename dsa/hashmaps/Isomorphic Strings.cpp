#include <bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    bool isIsomorphic(string s, string t) {  

        unordered_map <char,char> mp , m2  ;

        for( int i = 0 ; i < s.length() ;i++ ) {
            if( mp[s[i]] && mp[s[i]] != t[i] ) return false ;
            if( m2[t[i]] && m2[t[i]] != s[i] ) return false ;
            mp[s[i]] = t[i] ;
            m2[t[i]] = s[i] ;
        } 

        return true  ; 
        
    }
};

int main(){

return 0 ; 
}