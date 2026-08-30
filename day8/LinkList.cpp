#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtMiddle(Node* &head,int pos,int d){
    Node* temp = head;
    int cnt = 1;
    Node* newNode = new Node(d);
    if(pos == 1){
        newNode -> next = head;
        head = newNode;
        return;
    }

    while(cnt < pos -1){
        temp = temp -> next;
        cnt++;
    }
    
    newNode -> next = temp -> next;
    temp -> next = newNode;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}

int main(){
    Node* node1 = new Node(10);
    cout<<node1->data << endl;
    //cout<<node1->next << endl;
    Node* head = node1;
    Node* tail = node1;

    insertAtTail(tail,20);
    insertAtTail(tail,30);
    insertAtTail(tail,40);
    print(head);
    insertAtMiddle(head,1,35);
    print(head);
    return 0;
}