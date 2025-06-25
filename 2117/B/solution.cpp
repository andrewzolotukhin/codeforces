#include <bits/stdc++.h>
using namespace std;

void solve(int n) {
  int l = -1, r = n;
  vector<int> nums(n);
  for (int i = 0; i < n; i++) {
    if (i & 1) {
      nums[++l] = i + 1;
    } else {
      nums[--r] = i + 1;
    }
  }

  for (auto num : nums) {
    cout << num << " ";
  }
  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    solve(n);
  }
}
