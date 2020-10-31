#include<iostream>
using namespace std;
#define llt long long int 

llt fibonacci_last(int n){

    llt current=0;
    llt next=1;

    // iterate for from 1 to n-1
    for(int i=1;i<n;i++){
        llt temp=next+current;
        current=next;
        next=temp;
    }
    
    //return n-1 element
    return next;
}

int main(){
    int n;
    cin >>n;
    cout << fibonacci_last(n) << endl;
}