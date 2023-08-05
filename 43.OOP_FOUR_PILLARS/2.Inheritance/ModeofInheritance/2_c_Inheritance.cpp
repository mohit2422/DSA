// base class = public & inherited in sub class = protected mode -> Protected(inside current class as well as child clas
#include<iostream>
using namespace std;

class Human{

    public:
        int weight;
        int height;
        int age;
        

    public:
        int getAge(){
            return this->age;
        }

        int setWeight(int w){
            this-> weight = w;

        }
};

class Male: protected Human{

    public:
        string color;

        void sleep(){
                cout << "Male is sleeping " << endl;
        }

        int getHeight(){
            return this-> height;
        }
};

int main(){

    Male m1;

    cout << m1.getHeight() << endl;

    

  return 0;
}