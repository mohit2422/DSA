// https://leetcode.com/problems/fibonacci-number/description/

#include<iostream>
using namespace std;

int fibonnaci(int n){
    //base case
    if(n==0)
    return 0;

    if(n==1)
    return 1;

    // recursive call
    return fibonnaci(n-1) + fibonnaci(n-2);
}
int main(){
 
 int n;
 cout << "Enter the n " << endl;
 cin >> n;
 cout << endl;

 int ans = fibonnaci(n);

 cout << "nth term value is " << ans << endl;
 
 
 
  return 0;
}