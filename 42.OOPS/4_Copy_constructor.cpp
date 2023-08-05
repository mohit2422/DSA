#include<iostream>
using namespace std;
class Hero{
  

    public:
        int health;
        char level;
    


    // Parameterised Constructor
    Hero(int health, char level){
        this -> health = health;
        this -> level = level;
    }

// if we create copy constructor then default copy constructor will vanish
    // Copy Constructor
    Hero(Hero& temp){   
        cout << "Copy constructor call " << endl;
        this->health = temp.health;
        this->level = temp.level;
    }

    Hero(){
        cout << "Simple constructor called "<< endl;
    }

    void print(){
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }
    
    
};

int main(){
 
 // Statically
 Hero S(70,'C');
 S.print();

// Copy Constructor
 Hero R(S);
 //R.health = S.health;
 //R.level = S.level;
 S.print();
 


 



 

  
 
  return 0;
}
