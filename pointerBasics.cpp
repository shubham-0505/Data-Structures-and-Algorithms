#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){

    int *ptr;
    ptr = (int *)malloc(3*sizeof(int));

    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;

    for(int i=0;i<3;i++){
        cout<<ptr[i]<<endl;
    }
    free(ptr);
    cout<<"Heap memory released successfully !"<<endl;
    return 0;
}

// Using new operator

#include<iostream>
using namespace std;

int main(){

    int *ptr;
    ptr = new int[4];

    ptr[0] = 3;
    ptr[1] = 6;
    ptr[2] = 9;
    ptr[3] = 12;

    for(int i=0;i<4;i++){
        cout<<ptr[i]<<endl;
    }
    delete [ ] ptr;
    cout<<"Heap memory released successfully !"<<endl;
    return 0;
}

// Size of pointer is independent of data type of pointer