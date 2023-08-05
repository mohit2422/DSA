// COMPILE TIME POLYMORPHISM

#include<iostream>
using namespace std;

class A{

 public:
    void sayHello(){
        cout << "Speaking " << endl;
    }

    void sayHello(string name){
        cout << name << endl;
    }
    
    int sayHello(char name){
        cout << name << endl;
    }

    int sayHello(string name, int n){
        return 1;
    }
};



int main(){
 
 A obj;

 obj.sayHello();
 obj.sayHello("Mohit");
 obj.sayHello('C');
 cout << obj.sayHello("Mohit",5) << endl;
 
 
  return 0;
}