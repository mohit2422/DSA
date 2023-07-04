#include<iostream>
using namespace std;
int main(){
 
 int i = 5;
 int* p = &i;
 int** p2 = &p;

 //getting the value of i 

 cout << "value of i : " << i << endl;
 cout << "value of i using p : " << *p << endl;
 cout << "value of i using p2 : " << **p2 << endl;

 //getting the address of i 

 cout << "address of i : " << &i << endl;
 cout << "address of i using p : " << p << endl;
 cout << "address of i using p2 : " << *p2 << endl;

 //getting the address of p

 cout << "address of p : " << &p << endl;
 cout << "address of p using p2 : " << p2 << endl;
 
 
 
  return 0;
}