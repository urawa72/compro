#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
    int a, b; cin >> a >> b;
    cout << max(a + b, a - b) << endl;
    cout << min(a + b, a - b) << endl;

    return 0;
}
