#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int m, vector<int> &nums) {
  long long ans = 0;

  sort(nums.begin(), nums.end());

  for (int i = 1; i < n; i++) {
    auto x = m - (lower_bound(nums.begin(), nums.end(), i) - nums.begin());
    auto y = m - (lower_bound(nums.begin(), nums.end(), n - i) - nums.begin());
    ans += x * y - min(x, y);
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> nums(m);
    for (int i = 0; i < m; i++) {
      cin >> nums[i];
      nums[i] = min(n - 1, nums[i]);
    }
    cout << solve(n, m, nums) << '\n';
  }
}
