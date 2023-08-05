#include<iostream>
using namespace std;

//Hierarchical Inheritance 

class A{
    public:
        void fxn1(){
            cout << "Inside function 1 " << endl;
        }
};

class B: public A{
    public:
        void fxn2(){
            cout << "Inside function 2 " << endl;
        }
};

class C: public A{
    public:
        void fxn3(){
            cout << "Inside function 3 " << endl;
        }
};

int main(){
 
    A obj1;
    obj1.fxn1();

    B obj2;
    obj2.fxn1();
    obj2.fxn2();

    C obj3;
    obj3.fxn1();
    obj3.fxn3();
 
 
  return 0;
}