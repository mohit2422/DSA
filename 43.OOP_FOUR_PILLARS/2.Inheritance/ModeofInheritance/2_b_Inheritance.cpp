// base class = public & mode of inheritance in child class = private -> Not Accessible
#include<iostream>
using namespace std;

class Human{

    public:
        int weight;
        int height;

    private:
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

        int Age(){
            return this->age;  // not acccesible in male class also 
        }
};

int main(){

    Human h1;
    Male m1;

    cout << h1.height << endl;  //--> accessible in human class
    cout << m1.weight << endl;  //--> not accessible in male class 



  return 0;
}