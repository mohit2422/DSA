#include<iostream>
using namespace std;
int main(){
    
    int a = 4;
    int b = 6;

     cout<<"a&b = "<< (a&b) << endl;   //bitwise and operator
     cout<<"a|b = "<< (a|b) << endl;   //bitwise or operator
     cout<<"~a = "<< (~a) << endl;     //bitwise not operator
     cout<<"a^b = "<< (a^b) << endl;   //bitwise xor operator
     
     cout<<(17>>1)<<endl;     //left shift operator
     cout<<(17>>2)<<endl;
     cout<<(19<<1)<<endl;     //right shift operator
     cout<<(21<<2)<<endl;

     int i = 7;

     cout<<(i++)<<endl;   //post increment
     cout<<(++i)<<endl;   //pre increment
     cout<<(i--)<<endl;   //post decrement
     cout<<(--i)<<endl;   //pre decrement

     return 0;
}