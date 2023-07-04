#include<iostream>
using namespace std;
int main(){
 
char ch = 'a';
char* ptr = &ch;
ch++;
cout << *ptr << endl;

char arr[] = "abcde";
char *p = &arr[0];
cout << p << endl;
// in char array whole array will print unlike address print in int array
 
char arr2[] = "abcde";
char *p2 = &arr2[0];
p2++;  // it will shift pointer to next memory block
cout << p2 << endl;

char str[]= "babbar";
char *p3 = str;
cout << str[0] << " " << p3[0] << endl;
 
  return 0;
}