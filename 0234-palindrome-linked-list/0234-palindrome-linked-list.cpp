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
    bool isPalindrome(ListNode* head) {

        ListNode* temp=head;
        stack<int>st;

        while (temp!=nullptr)
        {

            st.push(temp->val);

            temp=temp->next;
        }

        ListNode* temp1=head;

        while (temp1!=nullptr)
        {
            if (st.top()!=temp1->val)
            {
                return false ;

            }

            temp1=temp1->next;
            st.pop();
        }

        return true ;


    }
};