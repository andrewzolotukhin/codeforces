#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n;
  cin >> n;
  vector<int> a(n);

  for (auto &c : a)
    cin >> c;
  sort(a.begin(), a.end());

  int l = 0, r = n - 1;
  int ans1 = 0, ans2 = 0;

  while ((a[l] + a[r]) % 2 != 0) {
    ans1++;
    l++;
  }
  if (ans1 == 0)
    return 0;

  l = 0;
  r = n - 1;
  while ((a[l] + a[r]) % 2 != 0) {
    ans2++;
    r--;
  }

  return min(ans1, ans2);
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    cout << solve() << '\n';
  }
}
