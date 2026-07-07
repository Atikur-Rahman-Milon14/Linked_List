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
void insert_at_tail(Node* &head, Node* &Tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        Tail = newNode;
        return;
    }
    Tail->next = newNode;
    Tail = newNode;
};
void print_reverse(Node* tmp){
  if(tmp == NULL){
    return;
  }
  print_reverse(tmp->next);
  cout << tmp->val << endl;
};
int main(){
    Node* head = NULL;
    Node* Tail = NULL;
    int N;
    while(true){
        cin >> N;
        if(N == -1){
            break;
        }

        insert_at_tail(head,Tail,N);
    }
    print_reverse(head);
    return 0;
}