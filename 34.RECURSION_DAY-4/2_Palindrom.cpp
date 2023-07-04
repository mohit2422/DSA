#include<iostream>
using namespace std;

bool checkpalindrom(string str, int i, int j){
    //base case
    if(i>j)
    return true;

    if(str[i] != str[j]){
        return false;
    }

    else{//recursive call
        return checkpalindrom(str, i++, j--);
    }
}
int main(){
 
 string name = "book";

 bool isPalindrom = checkpalindrom(name, 0, name.length()-1);
 
 if(isPalindrom){
     cout << "it is a palindrom " << endl;
 }

 else{
     cout <<  "it is not a palindrom " << endl;
 }
 
  return 0;
}