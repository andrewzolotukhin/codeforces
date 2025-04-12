#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  vector<int> nums(n);
  for (auto &v : nums)
    cin >> v;

  int ans = 1;

  int c = 1;

  for (int i = 1; i < n; i++) {
    if (nums[i] > nums[i - 1]) {
      c++;
    } else {
      c = 1;
    }

    ans = max(ans, c);
  }

  cout << ans << '\n';
}
