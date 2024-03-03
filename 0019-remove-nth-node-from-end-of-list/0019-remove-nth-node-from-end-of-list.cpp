class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* start=new ListNode();
        ListNode* fast=start;
        ListNode* slow=start;
        start->next=head;
        for(int i=1;i<=n;i++){
            fast=fast->next;
        }
        
        while(fast->next!=NULL){
         fast=fast->next;
         slow=slow->next;

        }

        slow->next=slow->next->next;
        return start->next;

    }
};