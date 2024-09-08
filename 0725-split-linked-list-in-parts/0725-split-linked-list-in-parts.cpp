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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {

        int length=0;
        ListNode* temp=head;

        while (temp!=NULL)
        {
            length++;
            temp=temp->next;
        }

        int nofparts=length/k;

        int moreinfirst=length%k;

        vector<ListNode*>ans(k,NULL);


        ListNode* current = head;
        ListNode* prev=NULL;


        for (int i=0; current!=NULL && i<k;i++)
        {
            ans[i]=current; 

            for(int count=1;count<=nofparts+(moreinfirst>0?1:0);count++)
            {
                prev=current;
                current=current->next;
            }

            if (prev != NULL) {
                prev->next = NULL;
            }
            moreinfirst--;


        }

       return ans ;

        
    }
};