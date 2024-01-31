#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }
};

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

void insertAtMiddle(Node* &head, Node* &tail, int d, int p){

    //Insert At Start
    if(p == 1){
        insertAtHead(head, d);
        return;
    }

    Node* temp = head;
     int count = 1;

     while(count < p-1){
        temp = temp -> next;
        count++;
     }

     //Insert At Last
     if(temp -> next == NULL){
        insertAtTail(tail, d);
        return;
     }

     //creating new node for d
     Node* nodetoInsert = new Node(d);

     nodetoInsert -> next = temp -> next;
     temp -> next = nodetoInsert;
}


void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}
int main()
{
    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    print(head);

    insertAtTail(tail,12);
    print(head);

    insertAtTail(tail,15);
    print(head);

    insertAtTail(tail,19);
    print(head);

    insertAtMiddle(head,tail,17,4);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

   return 0;
}