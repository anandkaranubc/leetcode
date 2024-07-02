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
    ListNode* newHead = NULL;
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head; // If the list is empty or has only one node, return it as is.
        }
        ListNode* newHead = reverse(head);
        head->next = nullptr; // Set the original head's next to nullptr
        return newHead;
    }

    ListNode* reverse(ListNode* curr) {
        if (curr->next == nullptr) {
            return curr; // If we reach the last node, return it as the new head.
        }
        ListNode* newHead = reverse(curr->next); // Recursively reverse the rest of the list.
        curr->next->next = curr; // Set the next node's next pointer to the current node.
        return newHead; // Return the new head of the reversed list.
    }
};