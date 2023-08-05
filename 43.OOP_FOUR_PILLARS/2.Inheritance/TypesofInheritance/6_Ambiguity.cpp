#include<iostream>
using namespace std;

class Animal{
 public:
    int age;
    int weight;

 public:
    void speak(){
        cout << "Barking " << endl;
    }
};

class Human{
    public:
        string color;
    
    void speak(){
        cout << "Speaking " << endl;
    }
    
};

//Multiple Inheritance

class Hybrid: public Animal, public Human{

};

int main(){
 
    Hybrid obj1;

    obj1.Animal::speak();
    obj1.Human::speak();
    
 
 
  return 0;
}