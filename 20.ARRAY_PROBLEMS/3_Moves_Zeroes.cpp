//https://leetcode.com/problems/move-zeroes/submissions/965295240/

#include<iostream>
using namespace std;

void movezeroes(int arr[], int n){
    int i = 0;
    for(int j=i; j<n; j++){
        if(arr[j] != 0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}

void print(int ans[], int p){
    for(int i=0; i<p; i++){
        cout << ans[i] << " ";
    }
     cout << endl;
}

int main(){
    int arr[5] = {0,1,0,3,12};

    movezeroes(arr,5);
    print(arr,5);


    return 0;

}