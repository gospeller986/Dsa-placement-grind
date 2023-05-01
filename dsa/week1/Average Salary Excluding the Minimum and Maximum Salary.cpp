#include <bits/stdc++.h>
using namespace std ; 
int main(){

return 0 ; 
}


// You are given an array of unique integers salary where salary[i] is the salary of the ith employee.

// Return the average salary of employees excluding the minimum and maximum salary. Answers within 10-5 of the actual answer will be accepted.


// Input: salary = [4000,3000,1000,2000]
// Output: 2500.00000
// Explanation: Minimum salary and maximum salary are 1000 and 4000 respectively.
// Average salary excluding minimum and maximum salary is (2000+3000) / 2 = 2500


class Solution {
public:
    double average(vector<int>& salary) { 

        double avg  = 0 ; 
        double div = (double)(salary.size()-2) ; 

        double maxi = 0 ; 
        double mini = (double)(INT_MAX) ;  


        for ( auto it : salary ) {
             
             avg += (double) (it) ;

             if(it > maxi){
                 maxi = double (it) ;
             }

             if(it < mini ) {
                 mini = double(it) ; 
             }

        }


        avg = avg - maxi - mini ; 

        return double (avg)/ double (div) ;


        
    }
};