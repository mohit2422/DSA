#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
  for(int row=0; row<3; row++){
    for(int col=0; col<4; col++){
      if(target == arr[row][col])
      return true;
    }
  }
  return false;
}

int main(){

    //creating 2D array
  int arr[3][4];  //row,column

  //taking input --> Row-WISE
  cout << "Input the elements" << endl;
  for(int row=0; row<3; row++){
    for(int col=0; col<4; col++){
      cin >> arr[row][col];
    }
  }

  //Printing elements
  cout << "Printing the Array" << endl;
  for(int row=0; row<3; row++){
    for(int col=0; col<4; col++){
      cout << arr[row][col] << " ";
    }
    cout << endl;
  }

  // Target Element Search
  cout << "Enter the element to search " << endl;
  int target;
  cin >> target;

  if(isPresent(arr, target, 3, 4)){
    cout << "Element Found" << endl;
  }

  else{
    cout << "Element Not Found" << endl;
  }

  return 0;
} 