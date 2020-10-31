#include <iostream>
#include <vector>
using namespace std;

int compute_min_refills(int dist, int tank, vector<int> & stops) {
    // write your code here
    int at=0,reach=0,n=0,i=0;

    while(i<stops.size()){
        if(stops[i]-at<=tank){
            reach=stops[i];
            i++;
            continue;
        }
        if(reach==at){
            return -1;
        }
        at=reach;
        n++;
    }
    return n;
    
}


int main() {
    int d = 0;
    cin >> d;
    int m = 0;
    cin >> m;
    int n = 0;
    cin >> n;

    vector<int> stops(n+1);
    for (size_t i = 0; i < n; ++i)
        cin >> stops.at(i);

    stops[n]=d; 
    cout << compute_min_refills(d, m, stops) << "\n";

    return 0;
}
