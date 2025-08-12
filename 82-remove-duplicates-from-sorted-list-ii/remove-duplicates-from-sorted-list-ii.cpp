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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* current=head;
        ListNode* prev=NULL;
        while(current!=NULL){
            if(current->next!=NULL&&current->val==current->next->val){
                int val=current->val;
                while(current!=NULL&&current->val==val){
                    ListNode* temp=current;
                    current=current->next;
                    delete(temp);
                }
                
                if(prev!=NULL){
                    prev->next=current;
                }else{
                    head=current;
                }
            }else{
                prev=current;
                current=current->next;
            }

        }
        return head;
    }
};