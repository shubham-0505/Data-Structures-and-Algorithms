#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the number of rows : ";
    cin>>n;

    int i = 1;

    while(i<=n){

        int j = 1;
        while(j<=n-i+1){
            cout<<j;
            j = j + 1;
        }
        int firstStar = i - 1;
        while(firstStar){
            cout<<"*";
            firstStar = firstStar - 1;
        }
        int secondStar = i - 1;
        while(secondStar){
            cout<<"*";
            secondStar = secondStar - 1;
        }
        int start = j - 1;
        while(start){
            cout<<start;
            start = start - 1; 
        }
        cout<<endl;
        i = i + 1;
    }
}