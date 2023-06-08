#include <bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    
    pair<int,string> convert( string s ) {
        int num = 0 ; 
         for( int i = 0 ; i < s.size() ; i++) {

             if(s[i] == ' '){
                 return {num, s.substr(i+1)} ;
             }
             else {
                 num *= 10 ;
                 num += int(s[i] -'0') ;
             }

         }
        
        return {0,""} ;

    }
    
    vector<string> subdomainVisits(vector<string>& cpdomains) {  


        map<string,int> mp ; 
        
        for(auto it :  cpdomains ) {
            
            pair<int,string>p = convert(it) ; 
            
            string domain = p.second ; 
            int visit = p.first ; 

            for( int i = domain.size() -1 ; i >= 0 ; i-- ) {
                 if(domain[i] == '.'){
                     mp[domain.substr(i+1)] += visit ;
                 }
            }

            mp[domain] += visit ; 
        }


        vector <string> ans ; 

        for(auto it : mp) {
            string s = to_string(it.second )+ " " + it.first ;
            ans.push_back(s) ;
        }
        
        return ans ; 
        
    }
};


int main(){

return 0 ; 
}