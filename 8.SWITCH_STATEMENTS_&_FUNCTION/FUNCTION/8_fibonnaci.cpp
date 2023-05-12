#include<iostream>
using namespace std;

int fibb(int a, int b, int n){

    for(int i = 1; i < n; i++){

    cout << a << endl;    
    int sum = a + b;
    a = b;
    b = sum;
    
    }

    return a;
}

int main(){
    int a = 0, b = 1, n;
    cout << "Enter n = ";
    cin >> n;

    // fibb(a,b,n);

   cout << n << "nt term is " << fibb(a,b,n);

    return 0;
}