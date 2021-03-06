#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    ll a, b, x; cin >> a >> b >> x;

    // 二分探索
    ll l = 0, r = 1000000001;
    while(1 < r - l){
        ll m = (r + l) / 2;
        ll n = to_string(m).size();
        if(a * m + b * n <= x) l = m;
        else r = m;
    }
    cout << l << endl;


    return 0;
}
