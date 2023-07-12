#include<iostream>
using namespace std;

struct students{
    int rollno;
    string name;
    string city;
};

int main(){

    struct students s1 = {1,"Shubham","Newasa"};
    struct students s2 = {2,"Gaurav","Nashik"};

    cout<<"Roll no of first student is : "<<s1.rollno<<" Name is : "<<s1.name<<" and city is : "<<s1.city<<endl;
    cout<<"Roll no of second student is : "<<s2.rollno<<" Name is : "<<s2.name<<" and city is : "<<s2.city<<endl;

    return 0;
}