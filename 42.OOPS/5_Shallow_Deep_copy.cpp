#include<iostream>
#include<cstring>
using namespace std;
class Hero{
    private:
    int health;
    public:
    char *name;
    char level;

    Hero() {
        cout << "simple constructor called " << endl;
        name = new char[100];
        cout << "in "<< endl;
    }
     // copy constructor
     Hero(Hero& temp){

         this->health = temp.health;
         this->level = temp.level;
         
         char *ch = new char[strlen(temp.name)+1];
         strcpy(ch, temp.name);
         this->name = ch;
     }

    void print(){
        cout << endl;
        cout << "[ Name: " << this->name << " , ";
        cout << "Health: " << this->health << " , ";
        cout << "Level: " << this->level << " ] ";
        cout << endl << endl;   
    }

        void setHealth(int h){
            health = h;
        }

        void setLevel(char ch){
            level = ch;
        }

        void setName(char name[]){
            strcpy(this->name, name);
        }

};

int main(){
 
 Hero hero1;
 hero1.setHealth(12);
 hero1.setLevel('D');
 char name[7] = "Babbar";
 hero1.setName(name);
 cout << "out "<<endl;

 hero1.print();
  // use default copy constructor

//   Hero hero2 = hero1;
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();
    hero2.print();
 
}