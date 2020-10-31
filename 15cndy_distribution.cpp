#include<iostream>
#include<vector>
using namespace std;
typedef long int lt;

int main(){
    lt n;
    cin >> n;
    vector<lt>vec;
    for(int i=1;;i++){
        if(n-i>=0){
            n-=i;
            vec.push_back(i);
            continue;
        }
        vec.pop_back();
        n+=i-1;
        vec.push_back(n);
        break;
    }
    cout << vec.size() << endl;
    for(int i=0;i<vec.size();i++){
        cout << vec[i] << " ";
    }
}