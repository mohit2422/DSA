#include<iostream>
using namespace std;
int main(){
 
 int arr[10] = {23,122,41,67};

 cout << "Address of first memory block " << arr << endl;
 cout << "Address of first memory block " << &arr[0] << endl;
 
 cout << "4th " << *arr << endl;
 cout << "5th " << *arr + 1  << endl;
 cout << "6th " << *(arr + 1)  << endl;
 cout << "7th " << *(arr) + 1  << endl;

 cout << "8th " << arr[2] << endl;
 cout << "9th " << *(arr+2) << endl;
 cout << "10th " << 2[arr] << endl;

 //diffrenece between array and pointer size 
 
 int temp[10] = {1,2};
cout << "Size of array " << sizeof(temp) << endl;
cout << "Size of value array[0] " << sizeof(*temp) << endl;
cout << "Size of address array[0] " << sizeof(&temp) << endl;

int *p = &temp[0];
cout << "Size of pointer address " << sizeof(p) << endl;
cout << "Size of pointer value " << sizeof(*p) << endl;
cout << "Size of pointer value " << sizeof(&p) << endl;

//diffrenece between array and pointer uisng &

int a[10] = {1,2,3,5};
cout << &a[0] << endl;

int *ptr = &a[0];
cout << &ptr << endl;

// Symbol table content can't be changed

int b[10];
// b=b+1;  it will give error

int *poi = &b[0];
cout << "before " << poi << endl;
poi = poi + 1;
cout << "after " << poi << endl;

  return 0;
}