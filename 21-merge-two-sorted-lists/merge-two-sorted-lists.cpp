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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1=list1;
        ListNode*temp2= list2;
        ListNode* dummy=new ListNode(-1);
        ListNode* res=dummy;

        while(temp1!=NULL && temp2!=NULL){
            // ListNode* res=dummy;
            if(temp1->val<temp2->val){
                res->next=temp1;
                res=temp1;
                temp1=temp1->next;

            }else{
                res->next=temp2;
                res=temp2;
                temp2=temp2->next;
            }

            // if(temp1) res->next=temp1;
            // if(temp2) res->next=temp2;

        }
        if(temp1) res->next=temp1;
         if(temp2) res->next=temp2;
        return dummy->next;
        
    }
};