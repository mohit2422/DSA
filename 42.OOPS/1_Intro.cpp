#include<iostream>
// #include "Hero.cpp"    ---> Adding class externally
using namespace std;

//creating class
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
 // Creation of Object 
 Hero Ramesh;
 //cout << "size of: " << sizeof(h1) << endl;

// Intialising Properties 
 // Ramesh.health = 70;
 Ramesh.level = 'A';

 // Setter
 Ramesh.sethealth(70);

 cout << "Health is " << Ramesh.gethealth() << endl;
 //cout << "Health is " << Ramesh.health << endl;
 cout << "Level is " << Ramesh.level << endl;
 
 
  return 0;
}