#include<iostream>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){

    struct rectangle r1 = {4,8};
    struct rectangle *ptr = &r1;

    ptr->length = 16;
    ptr->breadth = 32;

    cout<<"The length of rectangle is : "<<r1.length<<endl;
    cout<<"The breadth of rectangle is : "<<r1.breadth<<endl;

    return 0;
}

// Dynamic memory allocation of object of structure using pointer

#include<iostream>
#include<stdlib.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){

    struct rectangle *ptr;

    ptr = (struct rectangle *)malloc(sizeof(struct rectangle));

    ptr->length = 7;
    ptr->breadth = 14;

    cout<<"The length of rectangle is : "<<ptr->length<<endl;
    cout<<"The breadth of rectangle is : "<<ptr->breadth<<endl;

    free(ptr);
    cout<<"Heap memory released successfully !"<<endl;
    return 0;
}