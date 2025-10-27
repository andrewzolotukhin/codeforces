#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(k);
  for (auto &x : a)
    cin >> x;

  sort(a.begin(), a.end());

  int ans = 0;
  for (int i = 0; i < a.size() - 1; i++) {
    if (a[i] == 1) {
      ans++;
    } else {
      ans += 2 * a[i] - 1;
    }
  }
  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    cout << solve() << '\n';
}
