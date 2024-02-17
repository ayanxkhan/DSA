#include<bits/stdc++.h>
using namespace std;

void explainVector(){


// created a vector variable v with datatype int
// line 9 will print empty container {} and line 10 will add value 1 to the container emplace_back does the same thing but its faster
    // vector <int> v;
    // v.push_back(1);
    // v.emplace_back(2);
    // cout << v[0];



    // vector with pair
    // vector <pair<int , int>> vec;
    // vec.push_back({1,2});
    // here we dont have to write in braces because emplace back assumes it as pair
    // vec.emplace_back(1,2)



    // this is container of size 5 with five elements of 100 i.e {100,100,100,100,100}
    // vector<int> v(5,100);


    
    // to print vector
    // vector <int> v(5,20);
    // cout << v[0];

    // v.begin points to the memory address not the element and to access we write *(v.begin()) this will print element inside it that is 20.
    // vector <int>::iterator it = v.begin();
    // it++;
    // cout << *(it) << " ";


}

int main(){
    explainVector();


}