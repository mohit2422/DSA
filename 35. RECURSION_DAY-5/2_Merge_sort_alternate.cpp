#include<iostream>
using namespace std;

void merge(int *arr, int s, int m, int e){
  int length1 = m - s + 1;
  int length2 = e - m;

  int arr1[length1];
  int arr2[length2];

  int mainarrayindex = s;

  for(int i=0; i<length1; i++){
    arr1[i] = arr[mainarrayindex++];
  }

  mainarrayindex = m + 1;
  for(int i=0; i<length2; i++){
    arr2[i] = arr[mainarrayindex++];
  }

  int index1 = 0;
  int index2 = 0;
  mainarrayindex = s;

  while(index1 < length1 && index2 < length2){
    if(arr1[index1] < arr2[index2]){
      arr[mainarrayindex++] = arr1[index1++];
    }

    else{
      arr[mainarrayindex++] =  arr2[index2++];
    }
  }

  while(index1 < length1){
    arr[mainarrayindex++] = arr1[index1++];
  }

  while(index1 < length2){
    arr[mainarrayindex++] = arr2[index2++];
  }

}

void MergeSort(int *arr, int s, int e){
  // base case 
  if(s < e){

  int mid = (s+e)/2;

  MergeSort(arr, s, mid);
  MergeSort(arr, mid+1, e);

  merge(arr, s, mid, e);
  }
    


}
 
int main(){
 
 int arr[5] = {9,8,7,6,5};
 int n = 5;

 MergeSort(arr, 0, n-1);

 for(int i=0; i<n; i++){
     cout << arr[i] << " " ;
 }
 
 
  return 0;
}