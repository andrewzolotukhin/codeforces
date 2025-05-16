#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n >> m;
  vector<int> nums(n);
  for (auto &num : nums)
    cin >> num;

  vector<int> cnt(n, 0);
  unordered_map<int, int> mp;
  cnt[n - 1] = 1;
  mp[nums[n - 1]] = 1;

  for (int i = n - 2; i >= 0; i--) {
    if (mp.count(nums[i])) {
      cnt[i] = cnt[i + 1];
      continue;
    }
    mp[nums[i]] = 1;
    cnt[i] = cnt[i + 1] + 1;
  }

  while (m--) {
    int k;
    cin >> k;
    cout << cnt[k - 1] << '\n';
  }
}
