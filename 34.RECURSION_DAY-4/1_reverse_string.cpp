#include<iostream>
using namespace std;

// using single pointer

// void reverse(string& str, int i, int n){

//     //cout << "call received for " << str << endl;

//     //base case
//     if(i > n-i-1)
//     return ;

//     if(i < n-i-1){
//         swap(str[i], str[n-i-1]);
//         i++;
//         (n-i-1)--;

//         // recursive call

//         //reverse(str, i+1, j-1);
//         reverse(str, i, n-i-1);
        
//     }
// }

void reverse(string& str, int i, int j){

    //cout << "call received for " << str << endl;

    //base case
    if(i>j)
    return ;

    if(i<j){
        swap(str[i], str[j]);
        i++;
        j--;

        // recursive call

        //reverse(str, i+1, j-1);
        reverse(str, i, j);
        
    }
}


int main(){
 
 string name = "MOHIT";

 cout << name << endl;

 reverse(name, 0, name.length()-1);

 cout << name << endl;
 
 
  return 0;
}