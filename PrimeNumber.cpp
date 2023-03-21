#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter a number : "<<endl;
    cin>>n;

    int i = 2;

    while(i<n){
        if(n%i == 0){
            cout<<n<<" is not a Prime Number"<<" for "<<i<<endl;
        }
        else{
            cout<<n<<" is a Prime Number"<<" for "<<i<<endl;
        }
        i = i+1;
    }
    return 0;
}