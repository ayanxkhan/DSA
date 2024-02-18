// #include<bits/stdc++.h>
// using namespace std;

// void explainVector(){


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


// }

// int main(){
//     explainVector();


// }




// accesing or traversing the vector
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v;
//     // v.push_back(2);
//     // v.emplace_back(9);
//     // cout << v[1];

//     for (int i = 1; i < 11; i++)
//     {
//         v.emplace_back(i);
//     }

//     // cout << v[2];

//     cout << "the elements in the vector: ";
//     for (auto it = v.begin(); it != v.end(); it++)
//         cout << *it << " ";
// }

#include<bits/stdc++.h>

using namespace std;

int main() {
  vector < int > v;

  for (int i = 0; i < 10; i++) {
    v.push_back(i); //inserting elements in the vector
  }

  cout << "the elements in the vector: ";
  for (auto it = v.begin(); it != v.end(); it++)
    cout << * it << " ";

  cout << "\nThe front element of the vector: " << v.front();
  cout << "\nThe last element of the vector: " << v.back();
  cout << "\nThe size of the vector: " << v.size();
  cout << "\nDeleting element from the end: " << v[v.size() - 1];
  v.pop_back();

  cout << "\nPrinting the vector after removing the last element:" << endl;
  for (int i = 0; i < v.size(); i++)
    cout << v[i] << " ";

  cout << "\nInserting 5 at the beginning:" << endl;
  v.insert(v.begin(), 5);
  cout << "The first element is: " << v[0] << endl;
  cout << "Erasing the first element" << endl;
  v.erase(v.begin());
  cout << "Now the first element is: " << v[0] << endl;

  if (v.empty())
    cout << "\nvector is empty";
  else
    cout << "\nvector is not empty" << endl;

  v.clear();
  cout << "Size of the vector after clearing the vector: " << v.size();

}