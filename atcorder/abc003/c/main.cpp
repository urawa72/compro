#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int INT_INF = 1e9;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    int n, k; cin >> n >> k;
    V<double> r(n);
    for(int i = 0; i < n; i++) cin >> r[i];
    sort(ALL(r));

    int p = 0;
    if(n == k) p = 0;
    else p = n - k;
    double ans = 0;
    for(int i = p; i < n; i++){
        ans = (ans + r[i]) / 2;
    }
    cout << setprecision(12) << ans << endl;
}
