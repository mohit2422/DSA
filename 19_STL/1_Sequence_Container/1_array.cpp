#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[3] = {1,2,3};

    array<int,4> basic2 = {1,2,3,4};  //defining array in stl
    
    int size = basic2.size();  //defining size or length

    for(int i = 0; i<size; i++){
        cout << basic2[i] << endl;
    }

    cout << "elementn at 2nd index " << basic2.at(2) << endl;
    cout << "empty or not " << basic2.empty() << endl;
    cout << "first element is " << basic2.front() << endl;
    cout << "last element is " << basic2.back() << endl;



}