#include<iostream>
using namespace std;
int main(){
     
      unsigned int n;
      int count = 0;
      cout<<"Enter the n = ";
      cin>>n;
      while (n!=0)
      {
         
         if(n&1){
             count++;
         }
         n = n>>1;
      }
      cout << count;
  return 0;
}
   