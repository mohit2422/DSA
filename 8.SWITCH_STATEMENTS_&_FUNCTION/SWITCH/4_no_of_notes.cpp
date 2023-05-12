#include<iostream>
using namespace std;
int main(){
    int n, p, q, r, s;
    //int m = 1;
    cout << "enter the money" << endl;
    cin >> n;

        switch (1){
                case 1: p = n / 100;
                        n = n % 100;
                        cout << " no. of 100 notes = " << p <<endl; 
                        //cout << n << endl;
        }

    if(n >= 50){
        switch(2){
                case 2: q = n / 50;
                        n = n % 50;
                        cout << " no. of 50 notes = " << q <<endl; 
                        //cout << n << endl;
        }
    }

    if(n >= 20){
        switch(3){
                case 3: r = n / 20;
                        n = n % 20;
                        cout << " no. of 20 notes = " << r <<endl; 
                        //cout << n << endl;
        } 
    }
                    

    if(n >= 1){
        switch(4){
                case 4: s = n / 1;
                        n = n % 1;
                        cout << " no. of 1 notes = " << s <<endl; 
                        //cout << n << endl;
                        break;  
        }
    }
   
}