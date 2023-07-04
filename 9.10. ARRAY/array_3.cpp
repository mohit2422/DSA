/****************** Storing and Printing all the index with same values without writing in {} in an Array *******************************/

#include<iostream>
using namespace std;

int main()
{
int number[15];
fill_n(number,15,2);  // fill_n(array_name, array_size, value)

int n = 15;
cout << "All values of array" << endl;

for(int i = 0; i < n; i++)
{
    cout << number[i] <<" ";
}

return 0;
}