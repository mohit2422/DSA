#include<iostream>
//#include<math.h>
using namespace std;

int setbit(int m){
    int count = 0;
     while(m != 0){
         if(m & 1){
             count++ ;
         }
        m = m >> 1;     
     }

     return count;
}

int sumofbit(int a, int b){
            int sum = setbit(a) + setbit(b);
            return sum; 
}

int main(){
    int a, b; 
    cout << "Enter a & b = ";
    cin >> a >> b; 

    cout << sumofbit(a,b);

    return 0;
}