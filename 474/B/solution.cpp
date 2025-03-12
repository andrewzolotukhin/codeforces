#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  vector<long long> nums(n);

  long long acc = 0;

  for (int i = 0; i < n; i++) {
    long long x;
    cin >> x;
    acc += x;
    nums[i] = acc;
  }

  int m;
  cin >> m;

  while (m--) {
    long long x;
    cin >> x;

    int r = lower_bound(nums.begin(), nums.end(), x) - nums.begin() + 1;

    cout << r << '\n';
  }
}
