/****************** PAIR SUM *******************************/


/***************  USING ARRAY CONCEPT ***************/

#include<bits/stdc++.h>
//#include<iostream>
using namespace std;

void pairsum1(int arr[], int size, int sum){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++){
            if(arr[i] + arr[j] == sum){
                int t1, t2;
                t1 = min(arr[i], arr[j]);
                t2 = max(arr[i], arr[j]);
                cout << t1 << " " << t2 <<endl;

            }
        }
    }
}

void pairsum(int arr[],int size,int s)
{
    for(int i = 0; i<size; i++)
    {
        for(int j = i+1; j<size; j++)
        {
            if(arr[i] + arr[j] == s)
            {
                int temp1,temp2;
                temp1 = min(arr[i],arr[j]);
                temp2 = max(arr[i],arr[j]);
                cout<<temp1<<" "<<temp2<<endl;
            }

            
        }
    }

      cout<<endl<<endl;
}



int main(){

int sum1 = 5;
int sum2 = 0;
int sum3 = 2;

int arr1[5] = {1, 2, 3, 4, 5};
int arr2[5] = {2, -3, 3, 3, -2};
int arr3[5] = {4, 5, -2, 1, -3};

sort(arr1, arr1 + 5);  // inbuilt function for sorting output in ascending order
sort(arr2, arr2 + 5);
sort(arr3, arr3 + 5);

pairsum(arr1,5,sum1);
pairsum(arr2,5,sum2);
pairsum1(arr3,5,sum3);

//cout<<"values at different index " << number[13]<<endl;

return 0;
}


/***************  USING VECTOR CONCEPT ***************/

/* #include <bits/stdc++.h> 
#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
 vector<vector<int>> ans;    // Write your code here.
    for(int i = 0; i<arr.size(); i++){
        for(int j = i+1; j<arr.size(); j++){
            if(arr[i] + arr[j] == s){
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
} */