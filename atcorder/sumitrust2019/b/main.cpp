#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int n; cin >> n;

    for(int i = 1; i <= n; i++){
        if((int)(i * 1.08) == n){
            cout << i << endl;
            return 0;
        }
    }
    cout << ":(" << endl;

    return 0;
}
