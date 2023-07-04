/********* Comparing b/w the Sum of all elements & Min elements in the given Array ***********/

//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Sum function call
int sumarr(int x[],int y,int z)
{
    cout << "Enter all elements of the array"<<endl;

    for(int i=0;i<y;i++){
        cin>>x[i];
        z+=x[i]; 
    }
    return z;
}


// Min function call
int getMin(int num[],int n)
{
    int min = INT_MAX;
for(int i=0; i<n; i++)
   {    
    if(num[i]<min)
     {
        min = num[i];
     }
   }
   return min;
}
// returning min value 


int main()
{
    int size;
    cout << "Enter the Size of array"<<endl;
    cin >> size;  
    int numi[100];
   
   // taking input in array 
   //sumarr(numi,size,0);

//    if(min>=z){
//        cout<<"yes";
//    }
   
   
   int sum = sumarr(numi,size,0);
   cout<< "sum of the array is "<<sum<<endl;

   int mini = getMin(numi,size);
   cout<< "minimum elements in the array is "<<mini<<endl;

   cout << "10*mini = " << 10*mini <<endl;

   if(sum > 10*mini){
       cout<< "yes";
   }

   else{
       cout<< "no";
   }
    
   return 0;
}