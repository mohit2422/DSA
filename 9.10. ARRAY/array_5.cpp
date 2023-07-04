/********* Find the Max and Min elements of the given Array ***********/

//#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int getMax(int num[],int n)
{
     int maxi = INT_MIN;

     for(int i=0; i<n; i++)
     {
         maxi=max(maxi,num[i]);  //default function to find max between two number 
        // if(num[i]>max)
        // {
        //    max = num[i];
        // }
    }
    return maxi;
}

// returning max value 



int getMin(int num[],int n)
{
    int min = INT_MAX;
for(int i=0; i<n; i++)
   {
    
    //mini=min(mini,num[]);  //default function to find min between two 
    
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
   // int num[size];
   // never make array size as varaiable 

   int numi[100];

   // taking input in array 
   cout<<"Enter the all the input values"<<endl;

   for(int i=0;i<size;i++)
   {
       cin>> numi[i];
   }

    cout<<"Maximum value is " <<getMax(numi,size)<<endl;
    cout<<"Minimum value is " <<getMin(numi,size)<<endl;
    
    return 0;
}