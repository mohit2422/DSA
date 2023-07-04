#include<iostream>
using namespace std;
int main(){
 
 // row
 cout << "enter row no " << endl;
 int n;
 cin >> n;
 // column
 cout << "enter col no " << endl;
 int m;
 cin >> m;

 int** arr = new int*[n];

 for(int i=0; i<n; i++){
     arr[i] = new int[m];
 }
 // creation done 
 
 cout << "enter all values " << endl;
 // taking input
 for(int i=0; i<n; i++){
     for(int j=0; j<m; j++){
         cin >> arr[i][j];
     }
 }

// taking output
 for(int i=0; i<n; i++){
     for(int j=0; j<m; j++){
         cout << arr[i][j] << " ";
     }
     cout << endl;
 }

 // releasing memory
 for(int i=0; i<n; i++){
     delete [] arr[i];
 }

 delete [] arr;
 
 
  return 0;
}