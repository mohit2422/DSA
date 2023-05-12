// in stack first element in last element out 
#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> s;

    s.push("Mohit");
    s.push("Love");
    s.push("Sakshi");

    cout << "top element is " << s.top() << endl;
    
    s.pop();
    cout << "after popping top element is " << s.top() << endl;

    cout << "size of stack " << s.size() << endl;
    cout << "empty or not " << s.empty() << endl;

}