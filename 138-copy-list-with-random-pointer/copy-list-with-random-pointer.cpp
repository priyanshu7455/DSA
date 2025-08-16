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
    void insertbetweeen(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            Node* nextele=temp->next;
            Node* copy=new Node(temp->val);
            temp->next=copy;
            copy->next=nextele;
            temp=nextele;
        }
        
    }
    void connectrandompointer(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            Node* copynode=temp->next;
            if(temp->random){
                copynode->random=temp->random->next;
            }else{
                copynode->random=nullptr;
            }

            temp=temp->next->next;
        }
    }

    Node* getdeepcopy(Node* head){
        Node* temp=head;
        Node* dummyNode=new Node(-1);
        Node* res=dummyNode;

        while(temp!=NULL){
            res->next=temp->next;
            res=res->next;


            temp->next=temp->next->next;
            temp=temp->next;
        }
        return dummyNode->next;
    }


    Node* copyRandomList(Node* head) {
        insertbetweeen(head);
        connectrandompointer(head);
        return getdeepcopy(head);
    }
};