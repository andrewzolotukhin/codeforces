#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int k;
  cin >> k;
  vector<int> nums(12);

  for (auto &num : nums)
    cin >> num;

  if (k == 0) {
    cout << 0 << '\n';
    return 0;
  }

  sort(nums.begin(), nums.end(), greater<int>());

  int s = 0;
  int ans = 0;
  for (int i = 0; i < 12; i++) {
    if (s >= k)
      break;
    s += nums[i];
    ans++;
  }

  if (s < k) {
    cout << -1 << '\n';
  } else {
    cout << ans << '\n';
  }
}
