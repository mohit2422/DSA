#include<iostream>
using namespace std;

// Binary search for index of "17"
int binarysearch(int arr[], int s, int e, int index){
    int start = s;
    int end = e;
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == index){
            return mid;
        }

        if(index > arr[mid]){
            start = mid + 1; 
        }

        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    }

    return -1;
}

// Pivot index in the given sorted array 

int pivot(int arr[], int n){
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;
    int ans = -1;

    while(start < end){
        if(arr[mid] >= arr[0]){
            start = mid + 1;
        }

        else{
            end = mid;
        }

        mid = start + (end-start)/2;
    }

    return start;
}

int main(){

    // int arr[5] = {8,10,17,1,3};
    int arr[5] = {17,1,3,8,10};
    //int arr[5] = {3,8,10,17,1};
    
    int n = 5;
    int key = 17;
    int piv = pivot(arr,n);
    cout << "pivot index is " << piv << " and pivot value is " << arr[piv] << endl;

    
   if(key >= arr[piv] && key <= arr[n-1]){
       cout << "Index of 17 is " << binarysearch(arr, piv, n-1, key);    //Important point - updating initial
   }                                                                     // and final values 

   else if (key >= arr[0] && key <= arr[piv -1]){
       cout << "Index of 17 is " << binarysearch(arr, 0, piv-1, key);
   }

   else{
       cout << "Index of 17 is not found" ;
   }

   
}