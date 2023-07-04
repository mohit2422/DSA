#include<iostream>
using namespace std;

bool Binarysearch(int *arr, int s, int e, int k){

    //base case 
    if(s>e)
    return false;

    int mid = s + (e-s)/2;

    if(arr[mid] == k)
    return true;

    //for right side
    if(arr[mid] < k){
      return Binarysearch(arr, mid+1, e, k);
    }

    //for left side
    else{
      return Binarysearch(arr, s, mid-1, k);
    }

}
int main(){
 
 int arr[6] = {2,4,6,10,14,18};
 int size = 6;
 int key = 15 ;

 cout << " Element found or not " << Binarysearch(arr,0,5,key) << endl;
 
 
  return 0;
}