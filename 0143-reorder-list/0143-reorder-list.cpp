class Solution {
public:
    void reorderList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) return;

        
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

    
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while (slow != nullptr) {
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }

        
        ListNode* firstHalf = head;
        ListNode* secondHalf = prev; 
        while (secondHalf->next) {
            next = firstHalf->next;
            prev = secondHalf->next;

            firstHalf->next = secondHalf;
            secondHalf->next = next;
            
            firstHalf = next;
            secondHalf = prev;
        }
    }
};