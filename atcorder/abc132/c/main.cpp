#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int n; cin >> n;
    V<int> d(n);
    for(int i = 0; i < n; i++) cin >> d[i];

    sort(ALL(d));

    int ans = 0;
    for(int i = 1; i <= 100000; i++){
        auto ite = lower_bound(ALL(d), i);
        int l = ite - d.begin();
        if(l == n - l) ans++;
    }
    cout << ans << endl;

    return 0;
}
