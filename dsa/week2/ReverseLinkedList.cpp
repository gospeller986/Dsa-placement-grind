#include <bits/stdc++.h>
using namespace std ;  

class ListNode {
    public : 

    int data ; 
    ListNode* next ;
};

int main(){
 
return 0 ; 
} 

// two approaches 
/*
   2 approaches 

   1 -> iterative 
   2 -> recursive 

*/

// iterative 

class Solution {
public:
    ListNode* reverseList(ListNode* head) { 

        ListNode* prev = NULL ; 

        ListNode* curr = head ; 

        while(curr != NULL ) {
            ListNode* forward = curr->next ; 
            curr->next = prev ;
            prev = curr ;
            curr = forward ; 
        }


        return prev ;
        
    }
};


//recursive 

class Solution {
public: 
    void solve( ListNode* &head , ListNode* &curr , ListNode * &prev ) {
       
       if(curr == NULL) {
           head = prev ;
           return ;
       }

       ListNode* forward = curr->next ; 
       solve(head , forward , curr) ; 

       curr->next = prev ; 



    }

    ListNode* reverseList(ListNode* head) { 

        // Recursive approach 

        ListNode * curr = head ;
        ListNode * prev = NULL ; 

        solve(head , curr , prev ) ;

        return head ; 
        
    }
};
