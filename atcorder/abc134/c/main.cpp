#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  int n; cin >> n;
  V<int> v(n);
  for(auto &nx : v) cin >> nx;
  V<int> w = v;

  sort(ALL(w), greater<int>());
  int m1 = w[0];
  int m2 = w[1];

  for (int i = 0; i < n; i++) {
    if(v[i] == m1) cout << m2 << endl;
    else cout << m1 << endl;
  }

  return 0;
}
