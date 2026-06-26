/***********************************************************************************************************************************************/
#include <bits/stdc++.h>
#include <unordered_set>
#define int long long int
#define double long double
#define endl '\n'
#define um unordered_map
#define us unordered_set
#define f0(j) for (int i = 0; i < (int)j; i++)
#define f1(j) for (int k = 0; k < (int)j; k++)
#define fk(k, j) for (int i = k; i < (int)j; i++)
#define fa(a) for (auto x : a)
using namespace std;
const int mod = 1e9 + 7;
/***********************************************************************************************************************************************/

void solve() {
  int n, l, a;
  cin >> n >> l;
  vector<int> v;
  f0(n) {
    cin >> a;
    v.push_back(a);
  }
  sort(v.begin(), v.end());
  //   cout << endl;
  //   f0(n) { cout << v[i] << " "; }
  //   cout << endl;
  double maxm = max(abs(0 - v[0]), abs(l - v[n - 1]));
  f1(n - 1) { maxm = max(maxm, (double)abs(v[k] - v[k + 1]) / 2); }
  cout << fixed << setprecision(10) << maxm << endl;
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
