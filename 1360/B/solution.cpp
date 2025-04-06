#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums) {
  int n = nums.size();
  sort(nums.begin(), nums.end());

  int m = INT_MAX;
  for (int i = 1; i < n; i++) {
    m = min(m, nums[i] - nums[i - 1]);
  }
  return m;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (auto &v : nums) {
      cin >> v;
    }

    cout << solve(nums) << '\n';
  }
}
