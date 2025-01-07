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
        // If the list is empty or has only one node, return it as is
        if (!head || !head->next) return head;

        // Pointer to traverse the linked list
        ListNode* current = head;

        // Traverse the list
        while (current && current->next) {
            // If the current node's value equals the next node's value
            if (current->val == current->next->val) {
                // Skip the duplicate node
                current->next = current->next->next;
            } else {
                // Move to the next distinct node
                current = current->next;
            }
        }

        // Return the updated list
        return head;
    }
};
