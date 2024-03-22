/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        
        vector<int>v;

        ListNode* curr=head;

        while(curr){
            v.push_back(curr->val);
            curr= curr->next;

        }
      int n=v.size();
for(int i=0;i<n/2;i++)
{
    if(v[i]!=v[n-1-i])
    return false;
}
return true;
    }
};