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
        if (!head || !head->next) return head;

        ListNode* temp = new ListNode(-1);
        temp->next = head;

        ListNode* prev = temp;
        ListNode* current = head;

        while (current != NULL) {
            while (current->next != NULL && current->val == current->next->val) {
                current = current->next;
            }

            if (prev->next != current) {
                prev->next = current->next;
                current = current->next;
            } 
            
            else {
                prev = prev->next;
                current = current->next;
            }

        }

        return temp->next;
    }
};
