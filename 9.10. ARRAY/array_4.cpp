/****************** Array using functions *******************************/

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)      //when data type is not int place correct datatype in paranthesis
{
    //printing the array 
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"printing done"<<endl;
}

void printArray(char arr[], int size)      //when data type is not char place correct datatype in paranthesis
{
    //printing the array 
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<"printing done"<<endl;
}

int main()
{

int one[15]={1,2,3,4,5,6,7,8,9,10,1,2,3,3,3};
printArray(one,15);                                //Calling the function

int two[5]={4,6,8,10,14};
printArray(two,5);              //Calling the function

char ch[5] = {'a','b','c','d','e'};
//cout<<ch[3]<<endl;
printArray(ch,5);

double firstdouble[5];
float firstfloat[6];
bool firstbool[10];


/******** finding the size of array **************/

// int twosize = sizeof(two)/sizeof(int);
// cout<<"size of Two array "<<twosize<<endl;


return 0;

}