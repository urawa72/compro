#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;

int main() {
    int p, q, r;
    cin >> p >> q >> r;

    cout << min({p + q, p + r, q + r}) << endl;
    return 0;
}
