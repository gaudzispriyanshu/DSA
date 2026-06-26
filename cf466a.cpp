/***********************************************************************************************************************************************/
#include <bits/stdc++.h>
#include <unordered_set>
#define ll long long int
#define dl long double
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
  int n, m, a, b;
  cin >> n >> m >> a >> b;
  //   int maxm = n * a;
  //   int minm = (n % m == 0) ? b * (n / m) : b * (n / m) + 1;
  int x = min((n / m) * m * a, (n / m) * b);
  //   cout << x << endl;
  cout << min(x + b, x + (n % m) * a) << endl;
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
