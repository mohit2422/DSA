#include<iostream>
using namespace std;

// isse partition element ka index return hoga
int partition(int *arr, int s, int e){

    int pivot = arr[s];
    int count = 0;

    for(int i=s+1; i<=e; i++){
        if(arr[i] <= pivot)
            count++;
    }

    // placing pivot at right index
    int pivotIndex = s + count;
    swap(arr[s], arr[pivotIndex]);

    // left and right wala part sambhal lete hai
    int i = s; int j = e;

    while(i < pivotIndex && j > pivotIndex){
        while(arr[i] < pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i < pivotIndex && j > pivotIndex){
        swap(arr[i], arr[j]);
        }
    }


    return pivotIndex;
}

void quickSort(int *arr, int s, int e){

    //base case
    if(s >= e){
        return;
    }

    // Partition
    int p = partition(arr, s, e);

    //recursive relation

    // left part sort karo
    quickSort(arr, s, p-1);

    // right part sort karo
    quickSort(arr, p+1, e);
}

int main(){
 
 int arr[10] = {2,5,1,6,9,0,2,50,13,22};
 int n = 10;

 quickSort(arr,0,n-1);

for(int i=0; i<n; i++){
     cout << arr[i] << " " ;
 }
 
  return 0;
}