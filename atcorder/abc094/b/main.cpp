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
    int a, b, k; cin >> a >> b >> k;
    if(b - a + 1 >= k){
        for(int i = a; i < a + k; i++){
            cout << i << endl;
        }
        int m = 0;
        if(a + k > b - k) m = a + k;
        else m = b - k + 1;
        for(int i = m; i <= b; i++){
            cout << i << endl;
        }
    }else{
        for(int i = a; i <= b; i++){
            cout << i << endl;
        }
    }
}

