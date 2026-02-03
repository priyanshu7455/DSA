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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* slowbuddy=dummy;


        for(int i=0;i<n;i++){
            
            fast=fast->next;

        }

        while(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
            slowbuddy=slowbuddy->next;
        }
         slowbuddy->next = slow->next;

         return dummy->next;
    }
};