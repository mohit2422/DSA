#include<iostream>
using namespace std;

// upper to  lower char 
char changeupper(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }

    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}


// Reverse a String 
// https://leetcode.com/problems/reverse-string/description/
void reverse(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}

// Get the Length of String
int getlength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout << "enter your name here " << endl;
    cin >> name;

    // this is use to add null at any ith index 
    name[3]='\0';

    cout << "My name is " << name << endl;

    int len = getlength(name);
    cout << "Length of the string is " << len << endl;
    
    reverse(name,len);
    cout << "My name is " << name << endl;

   // cout << "converting upper to lower case " << changeupper('A') << endl;
 
  return 0;
}