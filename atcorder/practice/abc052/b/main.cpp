#include <bits/stdc++.h>
using namespace std;

#define all(v) v.begin(), v.end()
#define rep(i, n) for (int i = 0; i < n; i++)
typedef long long ll;

int main() {
    int n; cin >> n;
    string s; cin >> s;
    int ans = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(s[i] == 'I') sum++;
        if(s[i] == 'D') sum--;
        ans = max(ans, sum);
    }
    cout << ans << endl;
}
