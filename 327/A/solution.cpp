#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  vector<int> nums(n);

  for (auto &u : nums)
    cin >> u;

  vector<int> prefix(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    prefix[i] = prefix[i - 1] + nums[i - 1];
  }

  int ans = 0;
  int total = prefix[n];

  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int before = prefix[i];
      int after = total - prefix[j + 1];
      int middle = total - before - after;
      int len = j - i + 1;
      int midRev = len - middle;
      ans = max(ans, before + after + midRev);
    }
  }

  cout << ans << '\n';
}
