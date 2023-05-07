#include<iostream>
using namespace std;

// Function to print array

void printArray(int empId[], int size){

        cout<<"Printing the array : "<<endl;
        for(int i=0;i<size;i++){
            cout<<empId[i]<<endl;
        }
        cout<<"Printing completed ! "<<endl;
    }

int main(){

    // Declaring an array

    int number[5];

    // Accessing array 

    cout<<"The first element in array is : "<<number[0]<<endl;

    // Initialising an array

    int empAge[5] = {22,34,21,20,65};

    // Accessing elements in initialised array

    cout<<"The age of first employee is : "<<empAge[0]<<endl;
    cout<<"The age of second employee is : "<<empAge[1]<<endl;

    // Initialising few elements of an array

    int empSalary[5] = {12,20};
    
    int n = 5;
    for(int i=0;i<n;i++){
        cout<<empSalary[i]<<endl;
    }

    // Printing array with function

    int empId[5] = {1,2};
    printArray(empId,5);

    // Array of different datatype

    char ch[5] = {'a','e','i','o','u'};
    int c = 5;
    for(int i = 0;i<c;i++){
        cout<<ch[i]<<endl;

    }

    return 0;
}