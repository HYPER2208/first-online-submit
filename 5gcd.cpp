#include<iostream>
using namespace std;
#define llt long long int
llt gcd(llt a,llt b){
    if(b>a){
        llt c=a;
        a=b;
        b=c;
    }
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main(){
    llt a,b;
    cin >> a >> b;
    cout << gcd(a,b) << endl;
}