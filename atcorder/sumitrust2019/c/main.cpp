#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;
const ll INF = 1LL << 60;


int main() {
    int x; cin >> x;

    int y = x / 100;
    if(y * 100 <= x && x <= y * 105){
        cout << 1 << endl;
        return 0;
    }
    cout << 0 << endl;

    return 0;
}
