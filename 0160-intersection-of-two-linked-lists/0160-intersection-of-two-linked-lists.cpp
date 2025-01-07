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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Edge case: If either headA or headB is null, there can be no intersection
        if (!headA || !headB) return nullptr;

        // Initialize two pointers for each list
        ListNode* pointerA = headA;
        ListNode* pointerB = headB;

        // Traverse both lists
        while (pointerA != pointerB) {
            // If pointerA reaches the end of listA, redirect it to headB
            pointerA = pointerA ? pointerA->next : headB;

            // If pointerB reaches the end of listB, redirect it to headA
            pointerB = pointerB ? pointerB->next : headA;

            // By redirecting, the two pointers will eventually meet at the intersection point,
            // or both will become nullptr if there is no intersection.
        }

        // Return the intersection node or null if no intersection exists
        return pointerA;
    }
};
