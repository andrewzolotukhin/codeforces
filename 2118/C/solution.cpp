#include <bits/stdc++.h>
using namespace std;

long long solve(vector<long long> &nums, long long k) {
  int ans = 0;
  for (auto &x : nums) {
    ans += __builtin_popcountll(x);
  }

  long long dec = 1LL;

  for (int i = 0; i < 60 && k > 0; i++) {
    for (int j = 0; j < nums.size() && k > 0; j++) {
      if ((nums[j] & dec) == 0) {
        if (dec <= k) {
          ans++;
        }
        k -= dec;
      }
    }
    dec = dec << 1;
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    long long k;
    cin >> n >> k;
    vector<long long> nums(n);
    for (auto &x : nums)
      cin >> x;
    cout << solve(nums, k) << '\n';
  }
}
