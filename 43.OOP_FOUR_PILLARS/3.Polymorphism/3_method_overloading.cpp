// RUN TIME POLYMORPHISM (USING INHERITANCE CONCEPT)

#include<iostream>
using namespace std;

class Animal{

 public:
    void speak(){
        cout << "Speaking " << endl;
    }
};

class Dog: public Animal{

 public:
    void speak(){
        cout << "Barking " << endl;  //if this function is not here it will call from animal class
    }
};

int main(){
 
 Dog d;
 d.speak();
 
  return 0;
}