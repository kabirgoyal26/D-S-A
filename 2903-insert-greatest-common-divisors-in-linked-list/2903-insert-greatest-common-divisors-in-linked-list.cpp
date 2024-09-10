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
int gcdfinder(int a,int b)
{
    
    if (b == 0) {
        return a;
    }
    return gcdfinder(b, a % b);

    
}
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {

        ListNode* temp=head;

        if (temp==NULL || temp->next==NULL)
        {
            return temp;
        }


        ListNode* n1=head;
        ListNode* n2=head->next;

        while(n2 !=NULL)
        {
            int  k=gcdfinder(n1->val,n2->val);
            ListNode* nodein= new ListNode(k);
            
            n1->next=nodein;
            nodein->next=n2;
            
            n1=n1->next->next;
            n2=n2->next;

        }
        return head;

    }
};