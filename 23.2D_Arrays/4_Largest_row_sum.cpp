#include<iostream>
using namespace std;

void LargestRowSum(int arr[][4], int row, int col){
  int largest = INT16_MIN;
  int rowindex = -1;
  for(int row=0; row<3; row++){
    int sum = 0;
    for(int col=0; col<4; col++){
      sum += arr[row][col];
    }
    if(largest < sum){
      swap(largest,sum);
      rowindex = row;
    }
  }
  cout << "Largest row sum is "<< largest << endl;
  cout << "Index number is "<< rowindex << endl;
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

// Returning the Largest Row Sum
LargestRowSum(arr,3,4);

  return 0;
} 