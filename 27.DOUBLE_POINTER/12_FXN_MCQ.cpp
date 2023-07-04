#include<iostream>
using namespace std;

void increment(int **p){
    ++(**p);
}

void update(int *p){
    *p = (*p) * 2;
}

int main(){
 
 int i = 10;
 update(&i);
 cout << i << endl;

 int num = 110;
 int *ptr = &num;
 increment(&ptr);
 cout << num << endl;
 
 
  return 0;
}