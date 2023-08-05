#include<iostream>
using namespace std;
class Hero{
  

    public:
        int health;
        char level;
    
    // calling constructor 
    // Hero(){
    //     cout << "Constrctor called " << endl;
    // }

    // Parameterised Constructor
    Hero(int health, char level){
        cout << "this address " << this << endl;
        this -> health = health;
        this -> level = level;
    }

    void print(){
        cout << health << " " << level << endl; 
    }
    
    
};

int main(){
 
 // Statically
 Hero ramesh(10,'X');
 ramesh.print();

 cout << "Ramesh address " << &ramesh << endl;

 //Dynamically

 Hero *h = new Hero(70,'Y');
 h->print();
 cout << "h address " << &(*h) << endl;
 

  
 
  return 0;
}
