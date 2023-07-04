#include<iostream>
using namespace std;

int getSum(int *arr, int n){
    int sum = 0;
    for(int j=0; j<n; j++){
        sum += arr[j];
    }
    return sum;
}

int main(){
 
 int n;
 cout << "enter the length of array " << endl;
 cin >> n;

 // variable size array
 int* arr = new int[n];

 //taking input in array
 cout << "enter the values of array " << endl;
 for(int i=0; i<n; i++){
     cin >> arr[i];
 }
 
 int sum = getSum(arr, n);
 cout << "Sum is " << sum ;

  return 0;
}