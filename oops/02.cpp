// constructors

#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    int rollNo;
    string name;
    int marks;

    Student(string name){
        cout << "Im constructor 1" << endl;
        cout << name;
    }

    Student(string name,int rollNo){
        cout << "Im constructor 2" << endl;
        cout << name << endl;
        cout << rollNo;
    }

    Student(string name,int rollNo,int marks){
        cout << "Im constructor 3" << endl;
        cout << name << endl;
        cout << rollNo << endl;
        cout << marks;
    }

};

int main(){
    Student s1("Ayan",21);
    return 0;
}