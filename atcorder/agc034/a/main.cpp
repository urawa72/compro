#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;


int main() {
    int n, a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    // stringの添字と合わせるために引いておく
    a--, b--, c--, d--;
    string s; cin >> s;

    // 二連続で岩ではNG
    bool ok = true;
    for(int i = a; i <= c; i++){
        if(s[i] == '#' && s[i + 1] == '#'){
            ok = false;
            break;
        }
    }
    for(int i = b; i <= d; i++){
        if(s[i] == '#' && s[i + 1] == '#'){
            ok = false;
            break;
        }
    }
    if(!ok) {
        cout << "No" << endl;
        return 0;
    }

    // AがBを飛び越えなければいけない時
    // b-1~d+1の間に...が存在しないと飛び越えることができない
    if(d < c){
        bool flag = false;
        for(int i = b; i <= d; i++){
            if(s[i - 1] == '.' && s[i] == '.' && s[i + 1] == '.') {
                flag = true;
                break;
            }
        }
        if(!flag){
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
