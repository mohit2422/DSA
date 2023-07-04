#include<iostream>
using namespace std;

void BubbleSort(int *arr, int n){
    //base case
    if(n == 1 || n == 1)
        return;

    //processing -->  Largest element ko end mai place kar diya 
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    //Recursive call
    BubbleSort(arr, n-1);
}

int main(){
 
 int arr[5] = {2,5,1,6,9};

 BubbleSort(arr,5);
 
 for(int i=0; i<5; i++){
     cout << arr[i] << " ";
 }
 
 
 
  return 0;
}