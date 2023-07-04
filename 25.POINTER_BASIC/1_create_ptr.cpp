#include<iostream>
using namespace std;
int main(){
 
 int num = 5;

 cout << "Value of num is : " << num << endl;

 // Address of the operator - &

 cout << "address of num is " << &num << endl ;
 
 // Creating a pointer

 int* ptr = &num;

cout << "Address of num is : " << ptr << endl;
cout << "Value of num is : " << *ptr << endl;


// Alternate way of creating Poniter
 double d = 4.3;
 double *p2 = 0;
 p2 = &d;

 cout << "Address of d is : " << &d << endl;
 cout << "Address of d is : " << p2 << endl;
 cout << "Value of d is : " << d << endl;
 cout << "Value of d is : " << *p2 << endl;

 //Sizing

 cout << "Size of interger is " << sizeof(num) << endl;
 cout << "Size of pointer is " << sizeof(ptr) << endl;
 cout << "Size of pointer is " << sizeof(p2) << endl;

 // Changing Values 

 // copy of num value
 int a = num;
 cout << "num before changing a : " << num << endl;
 cout << "a before : " << a << endl;
  a++;
 cout << "num after changing a : " << num << endl;
 cout << "a after : " << a << endl;

 // copy pointer value

 int b = *ptr;
 cout << "ptr value before changing b : " << *ptr << endl;
 cout << "b before : " << b << endl;
  b++;
 cout << "ptr value after changing b : " << *ptr << endl;
 cout << "b after : " << b << endl;

 // changing *ptr 

 (*ptr)++;
 cout << "changing ptr value " << *ptr << endl;

 // copying pointer value 
 // int b = *ptr;

 // copying pointer

 int *q = ptr;

 cout << "address : " << ptr <<" "<< q << endl;
 cout << "value : " << *ptr <<" "<< * q << endl;

 // Incrementing address

 int j = 5;
 int *t = &j;
 cout << "t before value : " << t << endl;
 t = t+1;
 cout << "t after value : " << t << endl;
 
 
  return 0;
}