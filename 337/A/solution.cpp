#include <bits/stdc++.h>
#include <climits>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;

  vector<int> nums;

  cin >> n >> m;

  for (int i = 0; i < m; i++) {
    int t;
    cin >> t;
    nums.push_back(t);
  }

  sort(nums.begin(), nums.end());

  int r = INT_MAX;

  for (int i = 0; i < m - n + 1; i++) {
    if (nums[i + n - 1] - nums[i] < r) {
      r = nums[i + n - 1] - nums[i];
    }
  }

  cout << r << '\n';
}
