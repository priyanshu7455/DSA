/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp = node->next;       // store the next node
        node->val = temp->val;             // copy value
        node->next = temp->next;           // bypass temp
        delete temp;                       // delete correct node
    }
};