#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid){
                int count = 1;
                int blocksum = 0;
                 for(int i = 0; i < n; i++){
                    if(blocksum + arr[i] <= mid){
                        blocksum += arr[i]; 
                    }
                    else{
                        count ++;
                        if(arr[i] > mid || count > m){
                            return false;
                        }
                        blocksum = arr[i];
                    }
                }
                return true;
}

int partalloc(int arr[], int n, int m){
    int s = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];

    }
    int e = sum;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s <= e){
        if(isPossible(arr, n, m, mid)){
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
    int n,m;
    cout << "enter the no of blocks " << endl;
    cin >> n;
    cout << "enter the no of workers " << endl;
    cin >> m;
    int arr[n];
    cout << "enter all the values of blocks" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "Partition such that time required is " << partalloc(arr, n, m);
}