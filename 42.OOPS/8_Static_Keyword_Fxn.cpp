#include<iostream>
#include<cstring>
using namespace std;
class Hero{
    public:
    char *name;
    char level;
    static int timetocomplete;

    static int random(){
        return timetocomplete;
    }

};

int Hero::timetocomplete = 5;

int main(){

    cout << Hero::timetocomplete << endl;

    // static function call
    cout << "Calling using static function " << Hero::random() << endl;

// we should avoid to access the static data types using below method 
    Hero a;
    cout << a.timetocomplete << endl;

    Hero b;
    b.timetocomplete = 10;

    cout << a.timetocomplete << endl;
    cout << b.timetocomplete << endl;




}