/********** LINEAR SEARCH IN ARRAY ELEMENTS ***************/

#include<bits/stdc++.h>
// #include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
    for(int i = 0; i < size; i++){
        if(arr[i]==key){
            return 1;
        }
    }

    return 0;
}
int main(){
    
    int arr[10]={5,7,-2,10,22,-2,0,5,22,1};
    int key;
    cout<<"Enter the value of the element to be searched "<<endl;
    cin>>key;

    bool found = search(arr,10,key);  // declaring the function

    if(found){
        cout<<"Key is present"<<endl;
    }
    else{
        cout<<"Key is not present"<<endl;
    }

   return 0;
}