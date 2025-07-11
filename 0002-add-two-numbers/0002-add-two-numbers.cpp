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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

         ListNode* dummynode = new  ListNode(-1);
         ListNode* curr= dummynode ;

         int carry=0;
         int sum=0;
         


         while (l1!=nullptr || l2!=nullptr )
         {
            
            sum=carry;
            if (l1){
                sum+=l1->val;
            }
            if (l2){
                sum+=l2->val;
            }

            ListNode* nnn= new ListNode (sum%10);

            curr->next=nnn;
            curr=curr->next;

            carry= sum / 10;

            if (l1){
              l1=l1->next;
            }
            if (l2){
               l2=l2->next;
            }

         }

         if (carry)
         {
             ListNode* nnnn= new ListNode (carry);

            curr->next=nnnn;
            curr=curr->next;

         }

         return dummynode->next;
        
    }
};