// At ith round ith Largest element placed at right place 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        bool swapped = false;

        for(int j = 0; j < n-i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
               // cout << "yes" << " ";
                swapped = true;
                
            }
        }
        if(swapped == false){
            break;
        }
    }

               for(int i = n-1; i >= 0; i--){
                    cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cout << "enter lenght of array " << endl;
    cin >> n;
    int arr[n];
    cout << "enter all the values of array " << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    BubbleSort(arr, n);
}