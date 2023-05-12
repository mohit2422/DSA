#include<iostream>
using namespace std;
int main(){
    int a, b;
    char op;
    cout << "Enter the no 'a' = " << endl;
    cin >> a;
    cout << "Enter the no 'b' = " << endl;
    cin >> b;
    cout << "Enter the no operation = " << endl;
    cin >> op;
    cout << endl;

    switch (op)
    {
    case '+': cout << a + b;
        break;
    
    case '-': cout << a - b;
        break;
    
    case '*': cout << a * b;
        break;
    
    case '/': cout << a / b;
        break;
    
    case '%': cout << a % b;
        break;
    
    default: cout << "Enter the correct operation" << endl;
        break;
    }

    return 0;
}