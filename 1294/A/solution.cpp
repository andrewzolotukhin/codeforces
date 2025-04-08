#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> nums, int n) {
  sort(nums.begin(), nums.end());

  int diff = 2 * nums[2] - nums[0] - nums[1];

  return diff <= n && (n - diff) % 3 == 0;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    cout << (solve({a, b, c}, n) ? "YES" : "NO") << '\n';
  }
}
