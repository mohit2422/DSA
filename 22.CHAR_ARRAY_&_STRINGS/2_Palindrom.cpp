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

//Check Palindrome
bool checkpalindrom(char name[], int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        if(changeupper( name[s] ) != changeupper( name[e] )){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
        return 1;
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

    int len = getlength(name);
    cout << "palindrome or not " << checkpalindrom(name,len) << endl;

  return 0;
}