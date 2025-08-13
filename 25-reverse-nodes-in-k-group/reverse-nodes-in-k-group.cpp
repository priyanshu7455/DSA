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
    ListNode* reverses(ListNode* head){
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* fornt=temp->next;
            temp->next=prev;
            prev=temp;
            temp=fornt;
        }
        return prev;
    }

    ListNode* kthele(ListNode* head,int k){
        k-=1;
        ListNode* temp=head;
        while(temp!=NULL && k>0){
            k--;
            temp=temp->next;

        }
        return temp;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev=NULL;
        while(temp!=NULL){
            ListNode* nodee=kthele(temp,k);
            if(nodee==NULL){
                if(prev) prev->next=temp;
                break;
            }
            ListNode* fornt=nodee->next;
            nodee->next=NULL;
            reverses(temp);
            if(temp==head){
                head=nodee;
            }else{
                prev->next=nodee;
            }
            prev=temp;
            temp=fornt;

        }
        return head;
    }
};