/****************** Printing all the index value in an Array *******************************/

#include<iostream>
using namespace std;

int main(){

int number[15] = {1,2,3,4,5,6,7,8,9,10,1,2,3,3,3};

int n=15;
cout <<"All values of array"<<endl;

for(int i = 0; i < n; i++){
    cout << number[i] << " ";
}


return 0;
}