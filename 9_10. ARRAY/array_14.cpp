/****************** INTERSECTION OF TWO ARRAYS *******************************/
/*************** USING ARRAY CONCEPT  *******************/

#include<bits/stdc++.h>
//#include<iostream>
using namespace std;


void findArrayIntersection(int arr1[], int arr2[], int n, int m)
{
   int ans;
   int i = 0, j = 0;
    while(i<n && j<m){

        
        
        if(arr1[i]==arr2[j]){
            ans = arr1[i];
            i++;                         // Two pointer ( i & j) approach 
            j++;
            cout<<ans<<endl;
        
        }
        
        else if(arr1[i] < arr2[j]){
            i++;
        }
        
        else{
            j++;
        }
    }
    
    return ;
}

int main(){

    int arr1[6] = {1, 2, 2, 2, 3, 4};   //Both the arrays should be sorted in increasing values 
    int arr2[5] = {2, 2, 3, 3, 4};

findArrayIntersection(arr1,arr2,6,5);

return 0;
}


/***************  USING VECTOR CONCEPT ***************/

// #include <bits/stdc++.h> 
// vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
// {
//    int i = 0, j = 0;
//     vector<int> ans;
//     while(i<n && j<m){
        
//         if(arr1[i]==arr2[j]){
//             ans.push_back(arr1[i]);
//             i++;
//             j++;
//         }
        
//         else if(arr1[i] < arr2[j]){
//             i++;
//         }
        
//         else{
//             j++;
//         }
//     }
    
//     return ans;
// }