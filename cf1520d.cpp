/***********************************************************************************************************************************************/
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

ll plusall(ll n) { return n % 2 == 0 ? (n / 2) * (n - 1) : n * ((n - 1) / 2); }
void solve() {
  ll n;
  cin >> n;
  vector<ll> v(n);
  unordered_map<ll, ll> umap;
  f0(n) {
    cin >> v[i];
    umap[v[i] - i]++;
  };
  ll res = 0;
  for (auto x : umap) {
    // cout << x.first << "--" << x.second << " ";
    res += plusall(x.second);
  }
  cout << res << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
