#include <bits/stdc++.h>
using namespace std;

#define ALL(v) v.begin(), v.end()
#define V vector
#define P pair
#define ld long double
#define ll long long
#define mod 1000000007
#define IINF INT_MAX
#define INF 1LL << 30


int main() {
    int a, b; cin >> a >> b;

    int sum = 1;
    int cnt = 0;
    while(1){
        if(b <= sum) break;
        sum--;
        sum += a;
        cnt++;
    }
    cout << cnt << endl;

    return 0;
}
