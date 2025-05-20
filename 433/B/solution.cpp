#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n;
  vector<long long> nums(n);
  for (auto &num : nums)
    cin >> num;
  vector<long long> numsSorted = nums;
  sort(numsSorted.begin(), numsSorted.end());

  vector<long long> prefixNums(n + 1, 0LL);
  vector<long long> prefixNumsSorted(n + 1, 0LL);
  for (int i = 0; i < n; i++) {
    prefixNums[i] = ((i > 0) ? prefixNums[i - 1] : 0LL) + nums[i];
  }
  for (int i = 0; i < n; i++) {
    prefixNumsSorted[i] =
        ((i > 0) ? prefixNumsSorted[i - 1] : 0LL) + numsSorted[i];
  }

  cin >> m;

  while (m--) {
    int t, l, r;
    cin >> t >> l >> r;
    l--;
    r--;
    if (t == 1) {
      cout << (prefixNums[r] - (l == 0 ? 0 : prefixNums[l - 1])) << '\n';
    } else {
      cout << (prefixNumsSorted[r] - (l == 0 ? 0 : prefixNumsSorted[l - 1]))
           << '\n';
    }
  }
}
