#include<iostream>
using namespace std;

int binarysearch(int arr[], int size, int index){
    int start = 0;
    int end = size - 1;
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

int main(){
    int even[6] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int evenIndex = binarysearch(even, 6, 12);
    cout << "Index of 12 is " << evenIndex << endl;

    int oddIndex = binarysearch(odd, 5, 11);
    cout << "Index of 11 is " << oddIndex << endl;
}