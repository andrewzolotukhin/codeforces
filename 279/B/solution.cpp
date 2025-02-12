#include <bits/stdc++.h>
using namespace std;

int solve(int t, vector<int> &sizes) {
  int n = sizes.size();

  int result = 0;

  int r = 0;
  int s = 0;

  for (int i = 0; i < n; i++) {
    while (r < n && s + sizes[r] <= t) {
      s += sizes[r++];
    }

    result = max(result, r - i);
    s -= sizes[i];
  }

  return result;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, t;
  cin >> n >> t;
  vector<int> sizes(n);

  for (int i = 0; i < n; i++) {
    cin >> sizes[i];
  }

  cout << solve(t, sizes) << '\n';
}
