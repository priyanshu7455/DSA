/**
 * Definition for singly-linked list.
 * struct ListNode {
 * int val;
 * ListNode *next;
 * ListNode() : val(0), next(nullptr) {}
 * ListNode(int x) : val(x), next(nullptr) {}
 * ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        // 1. Handle edge cases: an empty list or a list with a single node.
        // In both cases, the result is an empty list (NULL).
        if (head == NULL || head->next == NULL) {
            // If you are on a platform like LeetCode, the platform handles memory
            // deallocation. Just returning NULL is sufficient and safer.
            // delete head; // This can be risky if the caller reuses 'head'.
            return NULL;
        }

        // 2. Initialize two pointers. 'slow' will point to the node
        // just before the middle node. 'fast' will race to the end.
        // By giving 'fast' a head start, we ensure 'slow' stops at the right place.
        ListNode* slow = head;
        ListNode* fast = head->next->next;

        // 3. Move the pointers through the list.
        // 'slow' moves one step at a time.
        // 'fast' moves two steps at a time.
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // 4. At this point, 'slow' is the node right before the middle node.
        // We need to delete the node that comes after 'slow'.
        ListNode* middleNode = slow->next;
        
        // 5. Unlink the middle node from the list.
        slow->next = slow->next->next;
        
        // 6. Free the memory of the unlinked middle node.
        delete middleNode;

        // 7. Return the head of the modified list.
        return head;
    }
};