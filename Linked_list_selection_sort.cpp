#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insert_at_tail(Node* &head, Node* &Tail, int N){
    Node* newNode = new Node(N);
    if(head == NULL){
        head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;
}
void print_node(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}
void sort_linked_list(Node* head){
    for(Node* i = head; i != NULL; i = i->next){
        for(Node* j = i->next; j != NULL; j = j->next){
            if(i->val > j->val){
                swap(i->val,j->val);
            }
        }
    }
}


int main(){
    Node* head = NULL;
    Node* Tail = NULL; 
    int N;
    while(true){
        cin >> N;
        if(N == -1){
            break;
        }
        else{
            insert_at_tail(head,Tail,N);
        }
    }

    sort_linked_list(head);
    print_node(head);
    return 0;
}