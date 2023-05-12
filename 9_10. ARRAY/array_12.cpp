/****************** FINDING THE UNIQUE ELEMENT IN THE ARRAY *******************************/

#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

int findUnique(int *arr, int size){
    int ans = 0;
    for(int i = 0; i<size; i++){
        ans = ans^arr[i];      // a^a = 0
    }
    return ans;
}

int main(){

    int arr[7] = {2, 3, 1, 6, 3, 6, 2};
    cout<<findUnique(arr,7)<<endl;

    int brr[9] = {1, 3, 1, 3, 6, 6, 7, 10, 7};
    cout<<findUnique(brr,9);


    

    }

