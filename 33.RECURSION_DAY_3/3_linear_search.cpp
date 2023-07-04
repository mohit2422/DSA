#include<iostream>
using namespace std;

bool Linearsearch(int *arr, int size, int k ){
    //base case
    if(size == 0){
        return false;
    }

    if(arr[0] == k){
        return true;
    }

    else{
        bool remainingpart = Linearsearch(arr + 1, size - 1, k );
        return remainingpart;
    }
}

int main(){
 
 int arr[5] = {3,5,7,5,9};
 int size = 5;
 int key = 10;

bool ans = Linearsearch(arr, size, key); 

if(ans){
    cout << "key is present " << endl;
}

else{
    cout << "key is not present " << endl;
} 
 
  return 0;
}