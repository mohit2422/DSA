#include<iostream>
using namespace std;

int intsqroot(int n){
    int start = 0;
    int end = n;
    long long int mid = start + (end - start)/2;  
    long long int ans = -1;

    while(start <= end){

       long long int sqr = mid*mid; // here mid updating in while loop thats why this line inside while loop

        if(sqr == n){
            return mid;
        }

        if(sqr < n){
            ans = mid;
            start = mid + 1;
        }

        else{
           end = mid - 1; 
        }

        mid = start + (end-start)/2;
    }

    return ans;
}

// More precise answer = upto 3 decimal points
 
double precisesqroot(int n, int temp, int precision){
    double ans = temp;
    double factor = 1;
    for(int i = 0; i < precision; i++){
        factor/=10;
        for(double j = ans; j*j < n; j += factor){
            ans = j;
        }
    }

    return ans;
}

int main(){
    int n;
    cout << "enter the number " << endl;
    cin >> n;
    int temp = intsqroot(n);
    cout << "Square root of n is " << precisesqroot(n, temp, 3);
}