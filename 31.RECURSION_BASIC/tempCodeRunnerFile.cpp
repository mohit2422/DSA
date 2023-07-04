#include<iostream>
using namespace std;

int factorial(int n){
    // base case
    if(n==0)
        return 1;

    int smallproblem = factorial(n-1);
    int bigproblem = n * smallproblem;

    return bigproblem;
}

int main(){
 
 int n;
 cin >> n;

 int ans = factorial(n);

 cout << ans << endl;
 
 
 
  return 0;
}