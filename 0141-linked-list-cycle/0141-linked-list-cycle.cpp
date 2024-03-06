class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *fast=head;
        ListNode *slow=head;
       
     while(fast->next!= NULL && fast!= NULL ){
         slow= slow->next;
         fast= fast->next->next;

         if(slow ==fast){
             return true;
         }
     } 

     return false;
    }
};
