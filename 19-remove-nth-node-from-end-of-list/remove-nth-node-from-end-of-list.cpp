class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* fast = head;
        for (int i = 0; i < n; i++) {
            fast = fast->next;
        }
        
        // If fast is nullptr, it means head needs to be removed
        if (fast == nullptr) {
            ListNode* toDelete = head;
            head = head->next;
            delete toDelete;
            return head;
        }
        
        ListNode* slow = head;
        while (fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next;
        }
        
        ListNode* toDelete = slow->next;
        slow->next = slow->next->next;
        delete toDelete;
        
        return head;
    }
};
