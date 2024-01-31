#include<iostream>
using namespace std;

/******************************************************** CLASS *************************************************************/

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int d){
        this -> data = d;
        this -> next = NULL;
    }

    //destructor
    ~Node(){
        int value = this -> data;

    //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }

        cout << "Memory is free for node with data " << value << endl;
    }

};

/******************************************************** INSERT AT TAIL *************************************************************/

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

/******************************************************** INSERT AT HEAD *************************************************************/

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;
}

/******************************************************** INSERT AT MIDDLE *************************************************************/

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

/******************************************************** DELETION *************************************************************/

void deleteNode(int position, Node* &head, Node* &tail){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        //memory free start node
        temp -> next = NULL;
        delete temp;
    }

    //deleting any middle or last node
    else{
        Node* curr = head;
        Node* prev = NULL;
        int cnt = 1;
        while(cnt < position){
            prev = curr;
            curr = curr -> next;
            cnt++;
        }
        if (curr->next == NULL) {
            tail = prev;
        }
        prev -> next = curr -> next;
        delete curr;
    }


}

/******************************************************** MAIN *************************************************************/

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

    insertAtTail(tail,21);
    print(head);

    insertAtMiddle(head,tail,17,4);
    print(head);

    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

    deleteNode(6, head, tail);
    print(head);
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

   return 0;
}