#include<iostream>
using namespace std;

void printhead(int n){

    //base case
    if(n==0){
        return ;
    }

    //recursive relation
    printhead(n-1);

    //processing 
    cout << n << endl;

}

void printtail(int n){

    //base case
    if(n==0){
        return ;
    }

    //processing 
    cout << n << endl;

    //recursive relation
    printtail(n-1);
}

int main(){
 
 int n;
 cout << "Enter the n " << endl;
 cin >> n;
 cout << endl;

 cout << "headcase" << endl;
 printhead(n);
 
 cout << endl;

 cout << "tailcase" << endl;
 printtail(n);
 
  return 0;
}