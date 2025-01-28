#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, k;
  cin >> n >> k;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    nums[i] = 5 - nums[i];
  }

  sort(nums.begin(), nums.end(), greater<int>());

  int result = 0;
  for (int i = 0; i + 2 < n; i += 3) {
    if (nums[i + 2] >= k) {
      result++;
    } else {
      break;
    }
  }

  cout << result << '\n';
}
