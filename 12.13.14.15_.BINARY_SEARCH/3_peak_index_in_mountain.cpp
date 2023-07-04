#include<iostream>
using namespace std;

int peakindex(int arr[], int size){
    int start = 0;
    int end = size-1;
    int mid = start + (end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start = mid + 1;
        }
        else{
            end = mid;
        }

        mid = start + (end-start)/2;
    }
    return mid;
}

int main(){
    int arr[5] = {2,3,4,6,1};
    cout << "Peak index in a given Mountain array is " << peakindex(arr, 5) << endl;
}