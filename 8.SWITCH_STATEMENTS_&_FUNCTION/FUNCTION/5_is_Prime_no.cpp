#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;
     isPrime(n);
     
     if(isPrime(n)){
         cout << n << " is Prime. ";
     }
     else{
         cout << n << " is not Prime. ";
     }

 return 0;    

}