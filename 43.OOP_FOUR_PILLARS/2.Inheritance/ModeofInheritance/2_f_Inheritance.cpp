// base class = protected & inherited in sub class = private mode -> Private(not accessible)
#include<iostream>
using namespace std;

class Human{

    public:
        int weight;
        int height;

    protected:
        int age;
        

    public:
        int getAge(){
            return this->age;
        }

        int setWeight(int w){
            this-> weight = w;

        }
};

class Male: private Human{

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

    cout << m1.age << endl;  // cannot accessible from male class

    

  return 0;
}