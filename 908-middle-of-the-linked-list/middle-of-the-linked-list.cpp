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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        int count = 1;
        while(curr->next!=NULL) {
            count++;
            curr = curr->next;
        }
        int pos = count/2;
        int start = 1;
        curr = head;
        while (start <= pos) {
            curr = curr->next;
            start++;
        }

        return curr;
    }
};