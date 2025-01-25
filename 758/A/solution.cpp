#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  vector<int> nums(n);
  int max = -1;
  for (int i = 0; i < n; i++) {
    cin >> nums[i];
    if (nums[i] > max) {
      max = nums[i];
    }
  }

  long long result = 0;

  for (int i = 0; i < n; i++) {
    if (nums[i] < max) {
      result += max - nums[i];
    }
  }

  cout << result << '\n';
}
