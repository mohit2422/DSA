#include<iostream>
using namespace std;

int firstOccur(int arr[], int n, int key){
    int ans = -1;
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;
        }

        else if(key > arr[mid]){
                start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    } 

    return ans;
}

int lastOccur(int arr[], int n, int key){
    int ans = -1;
    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start <= end){

        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }

        else if(key > arr[mid]){
                start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end-start)/2;
    } 

    return ans;
}


int main(){
    int arr[11] = {1,2,3,3,3,3,3,3,3,3,5};
    cout << "first occurence of 3 is at index " << firstOccur(arr, 11, 3) << endl;
    cout << "last occurence of 3 is at index " << lastOccur(arr, 11, 3) << endl;

    // Total no. of Occurence of 3 = last - first + 1

    int first =  firstOccur(arr, 11, 3);
    int last = lastOccur(arr, 11, 3);
    int total_occurence = last - first + 1;
    cout << "Total no. of Occurence of 3 is " << total_occurence << endl;
    
}