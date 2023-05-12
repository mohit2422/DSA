#include<iostream>
using namespace std;

bool ispossibe(int arr[], int mid, int m, int n){
    int studentCount = 1;
    int pagesum = 0;

    for(int i = 0; i < n; i++){
        if( pagesum + arr[i] <= mid ){
            pagesum += arr[i];
            }
    

        else{
            studentCount++;
            if( studentCount > m || arr[i] > mid){
                return false;
            }
            pagesum = arr[i];
        }

    }

    return true;
}

int allocbook(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    for( int i = 0; i < n; i++){
        sum += arr[i]; 
    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(ispossibe(arr,mid,m,n)){
            ans = mid;
            e = mid - 1;
        }

        else{
            s = mid + 1;
        }

        mid = s + (e-s)/2;
    }
    
    return ans;
}

int main(){
    int n, m;
    cout << "enter no of books n " << endl;
    cin >> n;
    cout << "enter no of student m " << endl;
    cin >> m;
    cout << "enter page no of each book " << endl;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "max no of pages assigned to student is min = " << allocbook(arr, n, m );
}