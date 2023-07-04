// in queue first element in first element out 
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("Mohit");
    q.push("love");
    q.push("Sakshi");

    cout << "size before popup "<< q.size() << endl;
    cout << "First element " << q.front() << endl;

    q.pop();
    cout << "size after popup "<< q.size() << endl;
}