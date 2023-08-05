#include<iostream>
using namespace std;

int left(int nums[],int threshold,int t){
    while(t>=0 && t<=11){
        while(nums[t]%2 != nums[t-1]%2 && threshold>=nums[t-1]){
            t--;
        }
        
        // if both t & t-1 are odd we have to return even thats why it is t+1; 
        if(nums[t]%2 != 0){
            return t+1;
        }
        // if both t & t-1 are even we will return t as it is even 
        else{
            return t;
        }
        
    }
}
        

int right(int nums[],int threshold,int t){
    while(t>=0 && t<=11){
        while(nums[t]%2 != nums[t+1]%2 && threshold>=nums[t+1]){
            t++;
            //cout << "right " << t << endl;
        }

        if(nums[t]%2 == nums[t+1]%2 && threshold>=nums[t+1]){
            return t+1;
        }

        else{
            return t;
        }
    }
}
    
        

int index(int nums[],int threshold, int n){
        for(int i=0; i<n; i++){
            if(nums[i]==threshold){
                return i;
            }
    }

}

int main(){
 
 int nums[12] = {8,6,3,4,3,2,9,4,3,6,7,5};
 int threshold = 9;

 int t = index(nums,threshold,12);
 cout << "t: " << t << endl;
        //left 
        int l = left(nums,threshold,t);
        cout <<  "l: " << l << endl;
        //right
        int r = right(nums,threshold,t);
        cout <<  "r: " << r << endl;
        
        int size = r-l;

        cout <<  "size: " << size << endl;
 
 
  return 0;
}