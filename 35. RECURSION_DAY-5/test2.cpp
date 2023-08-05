#include<iostream>
using namespace std;

int left(int *nums,int threshold,int t){
        while(nums[t]%2 != nums[t-1] && nums[t]>=nums[t-1]){
            t--;
        }
        return t-1;
    }
    
    int right(int *nums,int threshold,int t){
        while(nums[t]%2 != nums[t+1] && nums[t]>=nums[t+1]){
            t++;
        }
        return t+1;
    }
    
    int index(int& *nums,int threshold){
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==threshold){
                return i;
            }
    }

int main(){
 
 int arr[4] = {3,2,5,4};
 int thresold = 5;

 int t = index(nums,threshold);
        //left 
        int l = left(nums,threshold,t);
        //right
        int r = right(nums,threshold,t);
        
        int size = r-l;

        cout << size << endl;
 
 
  return 0;

}