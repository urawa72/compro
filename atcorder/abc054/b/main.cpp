#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;
using ld = long double;
const int MOD = 1e9+7;
const ll INF = 1LL << 60;


int main() {
    int n, m; cin >> n >> m;
    V<string> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    V<string> b(m);
    for(int i = 0; i < m; i++) cin >> b[i];

    // Aのループ
    for(int i = 0; i < n - m + 1; i++){
        for(int j = 0; j < n - m + 1; j++){
            int y = i;
            int x = j;
            bool flag = true;
            // Bのループ
            for(int k = 0; k < m; k++){
                for(int l = 0; l < m; l++){
                    // 一致してたらAを手動でインクリメント
                    if(b[k][l] == a[y][x]) x++;
                    else{
                        flag = false;
                        break;
                    }
                }
                // 1行見終わったら1行ずらす、xの開始値を元に戻す
                y++;
                x = j;
            }
            // falseでなければ一致したので終了
            if(flag){
                cout << "Yes" << endl;
                return 0;
            }
        }
    }
    cout << "No" << endl;

    return 0;
}
