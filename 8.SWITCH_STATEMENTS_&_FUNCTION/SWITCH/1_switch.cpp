#include<iostream>
using namespace std;
int main(){

    int m = 2;    // ONLY INTEGER AND CHARACTER ARE VALID OF SWITCH CONDITION
    char n = 'B';  // FLOATING AND STRINGS ARE NOT VALID 

    switch (m)
    {
    case 1: cout << " One " ;
        break;

    case 2: cout << " Two " ;

        switch(n)                      // NESTED SWITCH 
        {
        case 'A': cout << " Apple " ;
        break;

        case 'B': cout << " Ball " ;  
        break;

        default: cout << " Zebra " ;
         break;

        }

        break;
    
    default: cout << " Infinite " ;
         break;
    }
}