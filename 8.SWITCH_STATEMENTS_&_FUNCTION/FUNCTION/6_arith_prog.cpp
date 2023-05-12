#include<iostream>
//#include<math.h>
using namespace std;

int AP(int n){
    int ans = (3 * n)+ 7;
    return ans;
}

int main(){
    int n;
    cout << "Enter n = ";
    cin >> n;

    cout << n << "nt term is " << AP(n);

    return 0;

}