#include <bits/stdc++.h>
using namespace std ; 

    struct Node { 

        int val ;
        Node* next ;

    };

    int getCount(struct Node* head){
    
        int length = 0 ; 
        
        while(head != NULL ){
            length++; 
            head = head->next ; 
        }
        
        return length ; 
    
    }


int main(){

return 0 ; 
}