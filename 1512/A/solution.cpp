#include <bits/stdc++.h>

using namespace std;

int solve(vector<int> &nums) {
  if (nums[0] != nums[1] && nums[1] == nums[2]) {
    return 1;
  }
  for (int i = 1; i < nums.size() - 1; i++) {
    if (nums[i] != nums[i - 1] && nums[i] != nums[i + 1]) {
      return i + 1;
    }
  }

  return nums.size();
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    vector<int> nums;
    int n, x;
    cin >> n;
    while (n--) {
      cin >> x;
      nums.push_back(x);
    }

    cout << solve(nums) << '\n';
  }
}
