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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        // set me nums ke value daal do 
        unordered_set<int>st(nums.begin(),nums.end());

        


        // head ko alag se handle karlo 
        while(head!=NULL && st.find(head->val)!=st.end())
        {
            // ek temp me head store kara diya 
            ListNode*temp=head;
            head=head->next;
            delete(temp);
        }

        ListNode* current = head;

        while(current !=NULL && current ->next !=NULL)
        {
            if (st.find(current->next->val)!=st.end())
            {
                ListNode* temp=current->next;
                current->next=current ->next->next;
                delete(temp);
            }
            else 
            {
                current=current ->next;
            }
        }



        return head;
        
    }
};