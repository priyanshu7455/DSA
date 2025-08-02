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
    ListNode* reverselist(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        ListNode* newhead=reverselist(head->next);
        ListNode* front=head->next;
        front->next=head;
        head->next=NULL;
        return newhead;
    }
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) return true;
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){// thsi is beacude we want m1 middle in even number previous we nee m2 so we ue that condinton ;
            slow=slow->next;
            fast=fast->next->next;
        }

        // Now reverese the half linked list;
        ListNode* newhead=reverselist(slow->next);

        ListNode* first=head;
        ListNode* second=newhead;

        while(second!=NULL){
            if(first->val!=second->val){
                reverselist(newhead);// youko again theeek kar do
                return false;

            }
            first=first->next;
            second=second->next;

        }
        reverselist(newhead);
        return true;


    }
};