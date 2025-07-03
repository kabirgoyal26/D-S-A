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
    ListNode* rotateRight(ListNode* head, int k) {

        if (head==nullptr || head->next==nullptr)
        {
            return head ;
        }

        ListNode* tail=head;
        int len=1;

        while (tail->next!=nullptr)
        {
            len++;
            tail=tail->next;
        }

        k=k%len;

        if (k==0)
        {
            return head;
        }
        else 
        {
            tail->next=head;
            ListNode*temp=head;
            int com=len-k-1;

            while (com)
            {
                temp=temp->next;
                com--;
            }
            head=temp->next;
            temp->next=nullptr;
        }

        return head ;

        

    }
};