#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> &nums, long long k) {
  long long ans = 0;

  if (k == 1) {
    ans = nums[0] + nums[nums.size() - 1];

    for (int i = 1; i < nums.size() - 1; i++) {
      ans = max(ans, nums[i] + max(nums[0], nums[nums.size() - 1]));
    }
    return ans;
  }

  sort(nums.begin(), nums.end(), greater<>());

  for (int i = 0; i <= k; i++) {
    ans += nums[i];
  }
  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;
    vector<long long> nums(n);
    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }
    cout << solve(nums, k) << '\n';
  }
}
