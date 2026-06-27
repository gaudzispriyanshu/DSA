/***********************************************************************************************************************************************/
#include <algorithm>
#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>
#define ll long long int
#define dl long double
#define endl '\n'
#define um unordered_map
#define us unordered_set
#define f0(j) for (ll i = 0; i < (ll)j; i++)
#define f1(j) for (ll k = 0; k < (ll)j; k++)
#define fk(k, j) for (ll i = k; i < (ll)j; i++)
#define fa(a) for (auto x : a)
using namespace std;
const int mod = 1e9 + 7;
/***********************************************************************************************************************************************/
// Took lil help (i think that was more than enough) basically what we have to
// think is the continous number like 1 2 3 4 if been subtracted with their
// positions they becam eall equal thats 0 0 0 0 or -1 -1 -1 -1 based on
// indexing but yeah that question was literally wow

void solve() {
  ll n, a, m, v3 = 1, v4 = 0;
  vector<ll> v, v2;
  cin >> n;
  v.push_back(0);
  f0(n) {
    cin >> a;
    v.push_back(a + v[i]);
  }
  cin >> m;
  f0(m) {
    cin >> a;
    v2.push_back(a);
  }
  //   while (v3 < n && v4 < m) {
  //     if (v2[v4] <= v[v3] && v2[v4] > v[v3 - 1]) {
  //       umap[v2[v4]] = v3;
  //       v3++;
  //       v4++;
  //     } else {
  //       v3++;
  //     }
  //   }
  f0(m) { a = v2[i]; }
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  //   cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
