#include <bits/stdc++.h>
using namespace std ; 

struct ListNode {
    int val ;
    ListNode * next ;
};

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) { 

        if(head == NULL) return head ; 
        if(head->next == NULL || head->next->next == NULL) return head ; 

        ListNode* odd = head ;
        ListNode* even = head->next ; 
        ListNode* odd_head = head ;
        ListNode* even_head = head->next ;

        while(even != NULL && even->next != NULL ) {
            odd->next = odd->next->next ;
            even->next = even->next->next ; 
            odd = odd->next ;
            even = even->next ; 
        }

        odd->next = even_head;

        return head ;
        
    }
};
int main(){

return 0 ; 
}