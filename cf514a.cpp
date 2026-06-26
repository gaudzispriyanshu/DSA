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
  int n;
  cin >> n;
  string s = to_string(n);
  // 4545
  // 454 5 4 tens = 1
  // 45 4 44 tens = 2
  // 4 5 444 tens = 3
  int temp = n;
  int ans = 0;
  int tens = 0;
  while (temp / 10 != 0) {
    int temp2 = temp % 10;
    ans = min(temp2, 9 - temp2) * pow(10, tens) + ans;
    tens++;
    temp = temp / 10;
  }

  ans = temp == 9 ? ans = 9 * pow(10, tens) + ans
                  : ans = min(temp, 9 - temp) * pow(10, tens) + ans;
  cout << ans << endl;
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
