#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"enter the no 'n' = ";
    cin>>n;
    int digit;
    int i = 0;
    int ans = 0;

    while(n!=0){
        digit = n % 10;
        if(digit == 1){
            ans = (digit*pow(2,i)) + ans;
        }
         i++;
         n = n/10;
    }

    cout << ans <<endl;
}