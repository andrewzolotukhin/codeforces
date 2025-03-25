#include <bits/stdc++.h>
using namespace std;

long long solve(vector<int> &a) {
  int n = a.size();

  long long ans = 0;
  // a[j] - a[i] = j - i;
  // a[j] - j = a[i] - i
  for (int i = 0; i < n; i++) {
    a[i] = a[i] - i;
  }

  sort(a.begin(), a.end());

  long long c = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] == a[i - 1]) {
      c++;
    } else {
      if (c > 1) {
        ans += (c * (c - 1)) / 2;
        c = 1;
      }
    }
  }

  if (c > 1) {
    ans += (c * (c - 1)) / 2;
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &x : nums)
      cin >> x;

    cout << solve(nums) << '\n';
  }
}
