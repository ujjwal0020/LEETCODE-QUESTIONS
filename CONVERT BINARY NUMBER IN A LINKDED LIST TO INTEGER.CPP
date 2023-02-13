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
    int getDecimalValue(ListNode* head) {
        ListNode *temp=head;
        int decnum=0;

        while(temp!=NULL)
        {
         int tem=temp->val;
         decnum=decnum*2+tem;
         temp=temp->next;
        }
        return decnum;
        
    }
};
