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
    string s; cin >> s;

    if(s == "Sunny") cout << "Cloudy" << endl;
    if(s == "Cloudy") cout << "Rainy" << endl;
    if(s == "Rainy") cout << "Sunny" << endl;

    return 0;
}
