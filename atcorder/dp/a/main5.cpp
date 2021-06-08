#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n; cin >> n;
    V<int> h(n);
    for(int i = 0; i < n; i++) cin >> h[i];

    V<int> dp(n + 1, 1e9);
    dp[0] = 0;
    for(int i = 1; i < n; i++){
        dp[i] = min(dp[i], dp[i - 1] + abs(h[i] - h[i - 1]));
        if(1 < i) dp[i] = min(dp[i], dp[i - 2] + abs(h[i] - h[i - 2]));
    }
    cout << dp[n - 1] << endl;

    return 0;
}
