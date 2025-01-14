#include <bits/stdc++.h>
using namespace std;

bool solve(vector<int> &nums) {
  if (nums.size() == 1)
    return true;

  sort(nums.begin(), nums.end());

  for (int i = 1; i < nums.size(); i++) {
    if (nums[i] - nums[i - 1] > 1) {
      return false;
    }
  }
  return true;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> nums;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      nums.push_back(x);
    }

    cout << (solve(nums) ? "YES" : "NO") << '\n';
  }
}
