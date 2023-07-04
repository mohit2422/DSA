/****************** FINDING THE ONE DUPLICATE ELEMENT IN THE ARRAY *******************************/

#include<bits/stdc++.h>
//#include<iostream>
using namespace std;
int findDuplicate(int arr[], int n) 
{
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];
    }
    
    for(int i = 1; i<n; i++){
        ans = ans^i;
    }
    return ans;
}
int main(){

    int arr[5] = {4, 2, 1, 3, 1};
    int brr[7] = {6, 3, 1, 5, 4, 3, 2};

    cout << findDuplicate(arr, 5) << endl;
    cout<< findDuplicate(brr, 7) << endl;

    return 0;
}