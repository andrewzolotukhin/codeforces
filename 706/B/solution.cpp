#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &nums, int target) {
  int start = 0;
  int end = nums.size() - 1;

  if (nums[0] > target)
    return 0;

  if (nums[end] <= target)
    return end + 1;

  int mid;
  while (start < end) {
    mid = start + (end - start) / 2;
    if (mid == start)
      break;
    if (nums[mid] <= target) {
      start = mid;
    } else {
      end = mid;
    }
  }

  return start + 1;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, q;
  vector<int> nums;

  cin >> n;
  while (n--) {
    int x;
    cin >> x;
    nums.push_back(x);
  }

  sort(nums.begin(), nums.end());

  cin >> q;

  while (q--) {
    int x;
    cin >> x;
    cout << solve(nums, x) << '\n';
  }
}
