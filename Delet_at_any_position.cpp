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

void delet_at_any_pos(Node* &head, int idx){
    if(idx == 0){
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        return;
    }

    Node* tmp = head;
    for(int i = 1; i< idx; i++){
        tmp = tmp->next;
    }

    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
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
    delet_at_any_pos(head, 3);
    print_node(head);
    return 0;
}