//RUN IN ONLINE COMPILER 

#include<iostream>
#include<math.h>
using namespace std;

int main(){

    long long int n;

    cout<<"enter the no 'n' = ";
    cin>>n;

    unsigned long long int ans = 0;
    unsigned long long int i = 0;

    if(n < 0){
        n = pow(2,16) + n;
    }
    cout << n << endl;

    while(n){
        int bit = n & 1;
        ans = (bit * pow(10,i)) + ans;
        
        n = n >> 1;
        i++;     
    }
     
     cout << "Binary value is "<< ans << endl;
    return 0;

}