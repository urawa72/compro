#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;
    V<ll> c(n - 1), s(n - 1), f(n - 1);
    for(int i = 0; i < n - 1; i++) cin >> c[i] >> s[i] >> f[i];

    for(int i = 0; i < n - 1; i++){
        ll sum = c[i] + s[i];
        for(int j = i + 1; j < n - 1; j++){
            if(s[j] < sum){
                // ちょうど出発できない場合は次の出発時間に更新する
                if(sum % f[j] != 0){
                    sum = (sum / f[j] + 1) * f[j];
                }
            }else{
                sum = s[j];
            }
            sum += c[j];
        }
        cout << sum << endl;
    }
    cout << 0 << endl;
    return 0;
}
