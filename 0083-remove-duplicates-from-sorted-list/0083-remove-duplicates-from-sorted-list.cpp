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

        ListNode* prev=nullptr;
        ListNode*temp=head;

        while (temp!=nullptr)
        {
            if(prev)
            {
                if (prev->val==temp->val)
                {
                    ListNode* front =temp->next;
                    prev->next=temp->next;
                    delete temp;
                    temp=front;
                    
                }
                else 
                {
                    prev=temp;
                    temp=temp->next;
                }
            }
            else 
            {
                prev=temp;
                temp=temp->next;
            }


           
        }


        return head ;
    }
};