#include<iostream>
using namespace std;

int factorial(int M){
    int ans = 1;
    for(int i = 1; i <= M; i++){
        ans = ans * i;    
    }
    return ans;
}

int nCr(int N, int R){
    int num = factorial(N);
    int dem = factorial(N-R) * factorial(R);
    int answer = num/dem;
    return answer;
}

int main(){

    int n,r;
    cout << "Enter the n & r values " << endl; 
    cin >> n >> r;
    nCr(n,r);
    cout << " Final answer " << nCr(n,r) << endl;

    return 0;

}