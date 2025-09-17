/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* prev;
    Node* next;
    Node* child;
};
*/

class Solution {
public:
    Node* flatten(Node* head) {
       Node* p=head;
       while(p){
        if(p->child){
            Node* start = p->child;
            Node* end=p->child;

            while(end->next){
                end=end->next;
            }
            if(p->next){
                end->next=p->next;
                p->next->prev=end;
            }

            start->prev=p;
            p->next = start;
            p->child=nullptr;
        }
        p=p->next;
       }
       return head;
    }
    
};