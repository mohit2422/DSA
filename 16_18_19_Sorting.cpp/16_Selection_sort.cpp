// Selection Sort is Unstable algorithm coz relative order is not preserved .
// Space complexity is O(1) ---> Constant
// Time complexity is O(n^2) ---> 1+2+....+n-2+n-1 = n(n-1)/2

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void SlectionSort(int arr[], int n){
                for(int i = 0; i < n-1; i++){
                    int MinIndex = i;

                    for(int j = i+1; j < n; j++){
                        if(arr[j] < arr[MinIndex])
                        MinIndex = j;
                    }

                    swap(arr[MinIndex], arr[i]);
                }

                for(int i = 0; i < n; i++){
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

    SlectionSort(arr, n);
}