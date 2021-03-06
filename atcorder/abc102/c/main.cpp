#include <bits/stdc++.h>
#include <climits>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<ll> a(n);
    // あらかじめ絶対値考慮前の値で数列をつくっておく
    for(int i = 0; i < n; i++){
        ll x; cin >> x;
        x -= (i + 1);
        a[i] = x;
    }

    // 中央値をbに設定するのが最適になる
    sort(ALL(a));
    ll b = a[n / 2];
    ll ans = 0;
    for(int i = 0; i < n; i++){
        ans += abs(a[i] - b);
    }
    cout << ans << endl;


    return 0;
}
