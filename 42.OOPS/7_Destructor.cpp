#include<iostream>
using namespace std;
class Hero{
    public:
        int health;
        char level;

        void setHealth(int h){
            health = h;
        }

        void setLevel(char ch){
            level = ch;
        }

//Destructor

    ~Hero(){
        cout << "Destructor bhai called " << endl;
    }
};
int main(){
 
 //static
 Hero a;

 //Dynamic
 Hero *b = new Hero;
 
 
  return 0;
}