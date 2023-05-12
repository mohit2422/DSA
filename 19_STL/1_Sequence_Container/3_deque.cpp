// Double ended queue
// we can do insertion and deletion from both end 

#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;

    d.push_back(2);
    d.push_front(1);

    for(int i:d){
        cout << i << " ";
    }
    cout << endl;

    // 
    
    cout << "Print the first index element " << d.at(1) << endl;
    cout << "first elements " << d.front() << endl;
    cout << "last elements " << d.back() << endl;
    cout << "empty or not " << d.empty() << endl;

    cout << "before erase " << d.size() << endl;
    d.erase(d.begin(), d.begin()+1);
    cout << "after erase " << d.size() << endl;

    for(int i:d){
        cout << i << endl;
    }
}