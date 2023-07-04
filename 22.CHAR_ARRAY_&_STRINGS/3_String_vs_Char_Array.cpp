#include<iostream>
using namespace std;
int main(){

char mohit[20];
string k;
    cout << "enter your name1 here " << endl;
    cin >> mohit;
    cout << "enter your name2 here " << endl;
    cin >> k;

    mohit[3]='\0';
    k[3]='\0';

    cout << "My name is for char array " << mohit << " " << "My name is for string "<< k << endl;
 
  return 0;
}