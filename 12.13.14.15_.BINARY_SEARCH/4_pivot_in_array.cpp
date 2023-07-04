#include<iostream>
using namespace std;

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
    int arr[5] = {8,10,17,1,3};
    int brr[5] = {17,1,3,8,10};
    int crr[5] = {3,8,10,17,1};

        cout << "pivot index is " << pivot(arr,5)<< endl;
        cout << "pivot index is " << pivot(brr,5)<< endl;
        cout << "pivot index is " << pivot(crr,5)<< endl;
}
