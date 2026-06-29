/***********************************************************************************************************************************************/
#include <bits/stdc++.h>
#include <climits>
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
void solve() {
  ll n, a, countone = 0, maxm;
  cin >> n;
  vector<ll> v, dp(n, 0);
  f0(n) {
    cin >> a;
    v.push_back(a);
    if (a == 1)
      countone++;
  }
  if (countone == n) {
    countone--;
    cout << countone << endl;
    return;
  }
  dp[0] = v[0] == 0 ? 1 : 0;
  maxm = v[0] == 0 ? 1 : 0;
  fk(1, n) {
    if (v[i] == 1)
      dp[i] = dp[i - 1] - 1;
    else
      dp[i] = max((ll)1, dp[i - 1] + 1);
    maxm = max(maxm, dp[i]);
  }
  countone += maxm;

  cout << countone << endl;
}

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}