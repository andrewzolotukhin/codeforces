#include <bits/stdc++.h>
using namespace std;

long long solve(int n, int m, vector<int> &nums) {
  long long ans = 0;

  sort(nums.begin(), nums.end(), greater<int>());

  for (int i = 0; i < nums.size(); i++) {
    for (int j = i + 1; j < nums.size(); j++) {
      if (nums[i] + nums[j] < n) {
        break;
      }
      ans += 2 * (n - 1) - max(0, n - nums[j]) - max(0, n - nums[i]);
    }
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
    }
    cout << solve(n, m, nums) << '\n';
  }
}
