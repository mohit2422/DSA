//Wrapping up Data Members and Functions -> Encapsulation

#include<iostream>
using namespace std;

class student{

    private:
        string name; 
        int age;
        int height;

    public:
        int getAge(){
            return this->age;
        }
};

int main(){

    student first;

    cout << "Sab thik chal rha hai " << endl;
    cout << first.getAge() << endl;
  return 0;
}