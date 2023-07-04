#include<iostream>
using namespace std;

void fun(string arr[], int n){
    //base case 
    if(n==0)
        return;
    
    //processing
    int digit = n % 10;
    n = n / 10 ;

    // recursive call
    fun(arr,n);

    cout << arr[digit] << " ";
}

int main(){
 
 int n;
 cout << "Enter the n " << endl;
 cin >> n;

 string arr[10] = {"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

 fun(arr,n);

 
 
  return 0;
}