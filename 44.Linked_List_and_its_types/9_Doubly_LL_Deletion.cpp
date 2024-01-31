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

    ~Node(){
        int val = this -> data;

        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }

        cout << "Memory free for node with data " << val << endl;        
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

void deleteNode(int position, Node* &head, Node* &tail){
    //deleting first or start node
    if(position == 1){
        Node* temp = head;
        head = temp -> next;
        temp -> next -> prev = NULL;
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
       
        curr -> prev = NULL;
        prev -> next = curr -> next;       
        curr -> next = NULL;

        

        delete curr;
    }


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

    deleteNode(4, head, tail);
    print(head);


    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;

   return 0;
}