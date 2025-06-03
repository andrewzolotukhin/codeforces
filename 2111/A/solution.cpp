#include <bits/stdc++.h>
using namespace std;

int solve(int x) {
  vector<int> v = {x, x, x};

  int ans = 0;
  while (v[2] != 0) {
    ans++;
    if (v[1] == v[0]) {
      v[2] /= 4;
    } else {
      v[2] /= 2;
    }
    sort(v.begin(), v.end());
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int x;
    cin >> x;
    cout << solve(x) << '\n';
  }
}
