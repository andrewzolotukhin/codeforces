#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
      cin >> nums[i];
    }

    int odd = 0, even = 0;

    for (int i = 0; i < n; i++) {
      if ((i & 1) != (nums[i] & 1)) {
        if (i & 1) {
          odd++;
        } else {
          even++;
        }
      }
    }

    if (odd != even) {
      cout << -1 << '\n';
    } else {
      cout << odd << '\n';
    }
  }
}
