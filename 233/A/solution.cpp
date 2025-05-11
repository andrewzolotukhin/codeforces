#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;

  cin >> n;

  if (n & 1) {
    cout << "-1\n";
    return 0;
  }

  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    nums[i] = i + 1;
  }

  int i = 0;
  while (2 * i + 1 < n) {
    swap(nums[2 * i], nums[2 * i + 1]);
    i++;
  }

  for (auto num : nums) {
    cout << num << " ";
  }
  cout << '\n';
}
