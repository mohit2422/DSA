#include<iostream>
#include<bits/stdc++.h>

using namespace std;

bool ispossible(int arr[], int n, int m, int mid){
                int count = 1;
                int lastposition = arr[0];
                for(int i = 0; i < n; i++){
                    if(arr[i] - lastposition >= mid){
                        count ++ ;
                        if(count == m){
                            return true;
                        }
                        lastposition = arr[i];      
                    }  
                }
                return false;
}

int aggrcow(int arr[], int n, int m){
    sort(arr, arr + n);
    int s = 0;
    int maxi = -1;
    for(int i = 0; i < n; i++){
        maxi = max(maxi,arr[i]);
    }
    int e = maxi;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(ispossible(arr, n, m, mid)){
            ans = mid;
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }

        mid = s + (e-s)/2;
    }

    return ans;
}


int main(){
    int n,m;
    cout << "enter the no of stalls " << endl;
    cin >> n;
    cout << "enter the no of cows " << endl;
    cin >> m;
    int arr[n];
    cout << "enter all the values of stalls" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "largest min distance btw aggressive cows " << aggrcow(arr, n, m);
}