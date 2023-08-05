//Wrapping up Data Members and Functions -> Encapsulation
// base class = public & inherited in sub class = public --> Public 
#include<iostream>
using namespace std;

class Human{

    public:
        int age;
        int height;
        int weight;

    public:
        int getAge(){
            return this->age;
        }

        int setWeight(int w){
            this-> weight = w;

        }
};

class Male: public Human{

    public:
        string color;

        void sleep(){
                cout << "Male is sleeping " << endl;
        }
};

int main(){

    Male obj1;

    cout << obj1.age << endl;
    cout << obj1.height << endl;
    cout << obj1.weight << endl;
    cout << obj1.color << endl;
    obj1.sleep();
    obj1.setWeight(55);
    cout << obj1.weight << endl;

  return 0;
}