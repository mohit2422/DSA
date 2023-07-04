/****************** HW FIND TRIPLETS *******************************/

#include<iostream>
using namespace std;

void findTriplet(int arr[], int size, int sum){
        for(int i = 0; i < size; i++){
            for(int j = i+1; j < size; j++){
                for(int k = i+2; k < size; k++){
                    if(sum == arr[i] + arr[j] + arr[k]){
                        cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
                    }
                    
                }

            }

        }
}

int main(){
   // int size = 8;
    int sum = 10;
    int arr[8] = {1,2,3,4,5,6,7,8};
    findTriplet(arr,8,sum);

    return 0;

}