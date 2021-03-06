#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) REP(i, 0, n)
#define REP(i, x, n) for (int i = x; i < n; i++)
#define REPE(i, x, n) for (int i = x; i <= n; i++)
#define OP(x) cout << x << endl;
template<typename T> T gcd(T a, T b) { return b ? gcd(b, a % b) : a; }
template<typename T> T lcm(T a, T b) { return a / gcd(a, b) * b; }
template<class T> void chmax(T& a, T b) { if(a > b) a = b; }
template<class T> void chmin(T& a, T b) { if(a < b) b = a; }
typedef long long ll;

int main() {
    int x; cin >> x;

    for(int i = x; i > 1; i--){
        for(int j = 2; j * j <= i; j++){
            int tmp = i;
            if(tmp % j != 0) continue;
            while(tmp % j == 0){
                tmp /= j;
            }
            if(tmp != 1){
                continue;
            }else{
                cout << i << endl;
                return 0;
            }
        }
    }
    cout << 1 << endl;
}
