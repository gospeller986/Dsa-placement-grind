#include <bits/stdc++.h>
using namespace std ; 

struct ListNode {
    int val ;
    ListNode* next ; 
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {   

        ListNode* curr = head ;
        ListNode* prev = NULL ;

        while(curr != NULL) {
            ListNode* next = curr->next ; 

            curr->next = prev ;
            prev = curr ;
            curr = next ; 
        }

        return prev ; 

        
    }
};

int main(){

return 0 ; 
}