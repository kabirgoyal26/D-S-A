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
    ListNode* removeNthFromEnd(ListNode* head, int n) {

        if (head==nullptr || head->next==nullptr && n==1)
        {
            return nullptr;
        } 

        // size 
        
        int count =0;
        int size =0;



         ListNode* temp = head ;

         while (temp!=nullptr)
         {
            size++;
            temp=temp->next;
         }

         int torem= size-n+1;

         if (torem == 1)
         {
                ListNode* toDelete = head;
                 head = head->next;
                 toDelete->next = nullptr;
                 delete toDelete;
                 return head;
         }

         
         
         


         
         ListNode* temp1 = head ;
         ListNode* prev= nullptr;

          while (temp1!=nullptr)
         {
            count++;

            if (count==torem)
            {
                prev->next=temp1->next;
                temp1->next=nullptr;
                delete temp1;
                break;

            }
            prev=temp1;
            temp1=temp1->next;

         }

        return head ;
    }
};