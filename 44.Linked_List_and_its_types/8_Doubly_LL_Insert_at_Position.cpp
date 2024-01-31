#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
        this -> data = d;
        this -> next = NULL;
        this -> prev = NULL;
    }

};

void insertAtHead(Node* &head, Node* &tail, int d){
    Node* temp = new Node(d);

    if(head == NULL){
        head = temp;
        tail = temp;
    }

    else{
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}


void insertAtTail(Node* &head, Node* &tail, int d){
    Node* temp = new Node(d);

    if(tail == NULL){
        tail = temp;
        head = temp;
    }

    else{
        temp -> prev = tail;
        tail -> next = temp;
        tail = temp;
    }


}

void insertAtPosition(Node* &head, Node* &tail, int pos, int d){
    //starting
    if(pos == 1){ 
        insertAtHead(head, tail, d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < pos - 1){
        temp = temp -> next;
        cnt++;
    }

    //last
    if(temp -> next == NULL){

        insertAtTail(head, tail,d);
        return;
    }

    //creating node for d
    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;

}

void print(Node* head){
    Node* temp = head;
     while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
     }
     cout << endl;
}

int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    print(head);

    insertAtHead(head, tail, 11);
    print(head);

    insertAtHead(head, tail, 12);
    print(head);

    insertAtHead(head, tail, 13);
    print(head);

    insertAtPosition(head, tail, 1, 10);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

   return 0;
}