/******* Print the sum of all elements in the Array ***********/

#include<bits/stdc++.h>
using namespace std;

// void sumarr(int x[],int y,int z){
//     for(int i=0;i<y;i++){
//         cin>>x[i];
//         z+=x[i];   
//     }

//     cout<<"sum of all the elements in the array = " << z;
// }

int sumarr(int x[],int y,int z)
{
    for(int i=0;i<y;i++){
       cin>>x[i];
        z+=x[i]; 
    }
    return z;
}
 

int main(){
    int size;
    int sum = 0;
    cout<<"enter the size of the array"<<endl;
    cin>>size;
    int arr[100];
    cout<<"enter all the elements"<<endl;

  //  sumarr(arr,size,sum);  //calling function 

    // for(int i=0;i<size;i++){
    //     cin>>arr[i];
    //     sum+=arr[i];
    // }
    // cout<<"sum of all the elements in the array = "<<sum<<endl;  
    cout<<"sum of all the elements in the array = "<< sumarr(arr,size,sum);

return 0;    

}