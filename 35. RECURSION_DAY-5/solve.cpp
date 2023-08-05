#include<iostream>
using namespace std;
int main(){
 
 int arr1[4] = {1,3,5,7};
 int n = 4;
 int arr2[5] = {0,2,6,8,9};

 int i = 0;
 int j = 0;
 int k = n-1;

 while(i<k){
    swap(arr1[i],arr1[k]);
    swap(arr1[i],arr2[j]);
    i++; j++; k--;
    }

for(int i=0; i<n; i++){
    cout << arr1[i] << " ";
}

cout << endl;

for(int i=0; i<n+1; i++){
    cout << arr2[i] << " ";
}
 
 
  return 0;
}