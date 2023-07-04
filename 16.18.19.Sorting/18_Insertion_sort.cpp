//https://www.codingninjas.com/codestudio/problems/insertion-sort_3155179?source=youtube&campaign=love_babbar_codestudio2&leftPanelTab=1

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n){
      for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;

        for(; j>=0; j--){
            if(arr[j]>temp){
                //shift
                arr[j+1]=arr[j];
            }

            else{
                break;
            }
        }

        arr[j+1]=temp;
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

    InsertionSort(arr, n);
}