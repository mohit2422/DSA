#include<iostream>
using namespace std;
int main(){
 
  int first = 8;
  int second = 11;
  int *third = &second;
  first = *third;
  *third = *third + 2;
  cout << first << " " << second << endl;


// good question  
  int first1 = 110;
  int *p = &first1;
  int **q = &p;
  int second1 = (**q)++ + 9;
  cout << first1 << " " << second1 << endl;

  int first2 = 100;
  int *p2 = &first2;
  int **q2 = &p2;
  int second2 = ++(**q2);
  int *r2 = *q2;
  ++(*r2);
  cout << first2 << " " << second2 << endl;
 
 
  return 0;
}