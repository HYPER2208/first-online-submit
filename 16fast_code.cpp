#include<iostream>
#include<algorithm>
using namespace std;
typedef long long ll;

bool comp(string a, string b)
{
    string x = a + b;
    string y = b + a;
    return x > y;
}

int main()
{

    ll n;   cin >> n;

    string ar[n];
    for (int i = 0; i < n; i++) {
        cin >> ar[i];
    }

    sort(ar, ar + n, comp);

    for (auto r : ar)cout << r;
}