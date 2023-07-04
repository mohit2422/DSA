#include<iostream>
using namespace std;

int getsum(int *arr, int n){

    cout << " size is : " << sizeof(arr) << endl;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += arr[i];
    }

    return sum;
}

void update(int *p){
    //p = p+1;
    *p = *p + 1;
}

void print(int *p){
    //cout << "p print address : " << p << endl;
    cout << "*p print value : " <<  *p << endl;
}

int main(){
 
 /*
 int value = 5;
 int *p = &value;
 //print(p);

 cout << "before address " << p << endl;
 cout << "before value " << *p << endl;
 update(p);
 cout << "after address " << p << endl;
 cout << "after value " << *p << endl;

 */

 // sum
 int arr[6] = {1,2,3,4,5,7};
//  cout << "sum is : " << getsum(arr, 6);

// can print part of array

 cout << "sum is : " << getsum(arr + 3, 3);
 
 
  return 0;
}