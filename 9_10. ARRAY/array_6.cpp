/***** Changing the elements in call function without changing the values in main function ******/

#include<bits/stdc++.h>
using namespace std;

void karthik(int arr[], int n){
    int na[n];  // here we creating one more array and copies the elements of it and then modify the values of index . 

    for (int i = 0; i < n; i++) {
        na[i] = arr[i];
    }

    na[2]=7;
    for(int i=0;i<n;i++) {
        cout<<na[i]<<endl;
    }
    cout << endl;
}

int main(){
    int n=4;
    int mohit[4]={2,3,4,5};
    karthik(mohit,n);
    for(int i=0;i<n;i++){
        cout<<mohit[i]<<endl;
    }
    
}
