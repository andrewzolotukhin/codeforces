#include <bits/stdc++.h>
using namespace std;

int solve(int n) {
  int m = log10(n) + 1;
  int ans = 0;

  for (int i = 0; i < m; i++) {
    int base = stoi(string(i + 1, '1'));

    int k = base;

    while (((int)log10(k) == i) && k <= n) {
      ans++;
      k += base;
    }
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
    cout << solve(n) << '\n';
  }
}
