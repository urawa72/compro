#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    ll N, M; cin >> N >> M;
    if(N == 1 && M == 1) cout << 1 << endl;
    else if(N == 1) cout << M - 2  << endl;
    else cout << (N - 2) * (M - 2) << endl;
}




