#include<iostream>
using namespace std;
int main(){
    int n;
    int sum = 0;
    int product = 1;
    cout<<"enter n = ";
    cin>>n;
    while(n!=0){

        int digit = n%10;
        product *= digit;
        sum += digit;
       n = n/10;
    }

     int sub = product - sum;
        cout<<sub;
        //return sub;


}
