// base class = private & inherited in sub class = protected mode -> Private(not accessible)
#include<iostream>
using namespace std;

class Human{

    private:
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

class Male: protected Human{

    public:
        string color;

        void sleep(){
                cout << "Male is sleeping " << endl;
        }

        int getHeight(){
            return this-> height;  // not accessible
        }
};

int main(){

    Male m1;

    cout << m1.age << endl;  // cannot accessible from male class

    

  return 0;
}