#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
using ll = long long;


int main() {
  string n; cin >> n;

  string u = n;
  for (int i = 0; i < (int)n.length(); i++) {
    string t = u;
    reverse(ALL(t));
    if(t == u) {
      cout << "Yes" << endl;
      return 0;
    }
    u = '0' + u;
  }
  cout << "No" << endl;

  return 0;
}
