#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int MAX = 1000000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

 // 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
    ll X, Y; cin >> X >> Y;
    if((X + Y) % 3 != 0){
        cout << 0 << endl;
        return 0;
    }

    ll n = (-X + Y * 2) / 3;
    ll m = (X * 2 - Y) / 3;
    if(n < 0 || m < 0){
        cout << 0 << endl;
        return 0;
    }

    COMinit();
    cout << COM((X + Y) / 3, n) << endl;
}
