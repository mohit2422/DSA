#include<iostream>
using namespace std;
int main(){
 
 int arr[] = {11,21,13,14};
 cout << *(arr) << " " << *(arr+1) << endl;
 
 int arr2[6] = {11,12,13};
 cout << arr2 << " " << &arr2 << endl;

 int arr3[6] = {11,21,13};
 cout << (arr3 + 1) << endl;

 int arr4[6] = {11,21,31};
 int *p = arr4;
 cout << p[2] << endl;

 int arr5[] = {11,12,13,14,15};
 cout << *(arr5) << " " << *(arr5 + 3);
  
 /* int arr[] = {11,21,31,41};
 int *ptr = arr++;  // we can't update arr address
 cout << *ptr << endl; */
 
  return 0;
}