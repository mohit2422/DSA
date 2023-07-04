#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    vector<int> a(5,1);            //fixing the size of a vector and initialising it with elements;
    cout << "print a " << endl;
    for(int i:a){
        cout << i << " ";
    }
     cout << endl;

    vector<int> copy(a);         // copying the vector
    cout << "print copy " << endl;
    for(int i:copy){
        cout << i << " ";
    }
     cout << endl;





    // capacity is memory allocated to elements while size is no of element present in a vector 
    cout << "Capacity is " << v.capacity() << endl;
    cout << "Size is " << v.size() << endl;

    v.push_back(1);             //pushing element

    cout << "Capacity is " << v.capacity() << endl;
    cout << "Size is " << v.size() << endl;

    v.push_back(2);
    cout << "Capacity is " << v.capacity() << endl;
    cout << "Size is " << v.size() << endl;

    v.push_back(3);
    cout << "Capacity is " << v.capacity() << endl;
    cout << "Size is " << v.size() << endl;

    cout << "Elements at 2nd index " << v.at(2) << endl;
    cout << "first element " << v.front() << endl;
    cout << "last element " << v.back() << endl;

    cout << "before pop " << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();               //popping last element

    cout << "after pop " << endl;    
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;

    cout << "before clear size " << v.size() << endl;
    v.clear();
    cout << "after clear size " << v.size() << endl;



}