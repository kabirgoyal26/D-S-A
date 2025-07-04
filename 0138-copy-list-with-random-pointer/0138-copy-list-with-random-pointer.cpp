/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {

        Node* temp=head;
        Node* dummy = new Node (-1);
        Node* current = dummy;
        

        while (temp!=nullptr)
        {

            Node* newnode = new Node (temp->val);
            newnode->next=temp->next;
            temp->next=newnode ;
            temp=temp->next->next;
        }

        temp=head;

        while (temp!=nullptr)
        {
            if (temp->random)temp->next->random=temp->random->next;
            else temp->next->random=nullptr;
            temp=temp->next->next;
        }


        temp=head;

        while (temp!=nullptr)
        {
            current->next=temp->next;
            current=current->next;
            temp->next=temp->next->next;
            temp=temp->next;

        }



        return dummy->next;
    }
};