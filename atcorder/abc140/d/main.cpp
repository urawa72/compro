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
    int n, k; cin >> n >> k;
    string s; cin >> s;

    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == s[i + 1]) cnt++;
    }

    int ans = min(cnt + 2 * k, n - 1);
    cout << ans << endl;

    return 0;
}
