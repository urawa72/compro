#include <bits/stdc++.h>
#include <string>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
typedef long long ll;
const int IINF = INT_MAX;
const ll INF = 1LL << 30;
const ll MOD = 1e9 + 7;


int main() {
    string s; cin >> s;

    string ans;
    for(int i = 0; i < (int)s.size(); i++){
        if('0' <= s[i] && s[i] <= '9') ans += s[i];
    }
    cout << ans << endl;

    return 0;
}
