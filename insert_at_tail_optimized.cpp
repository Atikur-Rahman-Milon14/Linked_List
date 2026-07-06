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
void insert_on_tail(Node* &head, Node* &Tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;
};
void print_tail(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val <<endl;
        tmp = tmp->next;
    }
};
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* Tail = new Node(30);

    head->next = a;
    a->next = Tail;
    insert_on_tail(head, Tail,40);
    print_tail(head);
    return 0;
}