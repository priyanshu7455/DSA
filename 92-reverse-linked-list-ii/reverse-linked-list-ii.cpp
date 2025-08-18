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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==NULL ||head->next==NULL|| left==right){
            return head;
        }

        ListNode* current=head;
        ListNode* prev=NULL;
        int i=1;
        while(current!=NULL && i!=left){
            prev=current;
            current=current->next;
            i++;
        }//current starting position per ha jaha se reverese karna ha 
        ListNode* pointertostart=prev;
        ListNode* start=current;
        prev=NULL;
        while(current!=NULL && i!=right+1){
            ListNode* front=current->next;
            current->next=prev;
            prev=current;
            current=front;
            i++;
        }
        start->next=current;
        if( pointertostart!=NULL){
             pointertostart->next=prev;
        }else{
            return prev;
        }
        return head;
    }
};