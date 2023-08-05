#include<iostream>
using namespace std;
class Hero{
    //properties
    private:
        int health;

    public:
        char level;

    // setter
    void sethealth(int h){
        health = h;
    }

    //getter
    int gethealth(){
        return health;
    }
    
};

int main(){
 
 // Statically
 Hero a;
  a.level = 'A';
  a.sethealth(70);
 cout << "Health is " << a.gethealth() << endl;
 cout << "Level is " << a.level << endl;
 
 //Dynamically

 Hero *b = new Hero;
 (*b).level = 'B';
 //b->level = 'B';
 //(*b).sethealth(80);
 b->sethealth(80);

 cout << "Health is " << (*b).gethealth() << endl;
 //cout << "Health is " << b->gethealth() << endl;
 cout << "Level is " << (*b).level << endl;
//  cout << "Level is " << b->level << endl;
 
 
  return 0;
}
