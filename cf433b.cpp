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

void makepresum(ll n, vector<ll> &a) {
  fk(2, n) { a[i] = a[i - 1] + a[i]; }
  // fa(a) { cout << x << "   "; }
  // cout << endl;
}
void solve() {
  ll n, a, m, type, l, r;
  cin >> n;
  vector<ll> v, rv, v1, res;
  v.push_back(0);
  rv.push_back(0);
  f0(n) {
    cin >> a;
    v.push_back(a);
    rv.push_back(a);
  }
  sort(rv.begin(), rv.end());
  makepresum(n + 1, v);
  makepresum(n + 1, rv);
  cin >> m;
  f0(m) {
    cin >> type >> l >> r;
    ll ans = type == 1 ? v[r] - v[l - 1] : rv[r] - rv[l - 1];
    res.push_back(ans);
  }
  fa(res) { cout << x << endl; }
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