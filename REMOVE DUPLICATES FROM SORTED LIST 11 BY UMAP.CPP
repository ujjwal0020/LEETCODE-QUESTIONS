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
        unordered_map<int,int> ump;
        ListNode* head1=new ListNode(0);
        ListNode *tomp=head1;

        ListNode *temp=head;
        while(temp!=NULL)
        {
            ump[temp->val]++;
            temp=temp->next;
        }
         
        temp=head;
        while(temp!=NULL)
        {
            if(ump[temp->val]==1)
            {
             ListNode * temp1 =new ListNode(temp->val);
             tomp->next=temp1;
             tomp=temp1;

            
               

            }
            temp=temp->next;
        }

return head1->next;

    
    }

};
