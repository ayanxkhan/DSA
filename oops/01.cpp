#include<bits/stdc++.h>
using namespace std;

class Student{
    public:

    string name;
    int rollNo;

    void changeName(string name){
        this->name = name;
    }

    void printInfo(string name,int rollNo){
        cout << "Name: " << name << endl;
        cout << "Roll No :" << rollNo;
    }
};

int main(){
    Student s1;
    s1.printInfo("Ayan",22);
    // s1.name = "Ayan";
    // cout << s1.name << endl;

    // s1.rollNo = 12;
    // cout << s1.rollNo;


    // s1.changeName("Ayan Khan");
    // cout << s1.name;



    return 0;
}