#include <bits/stdc++.h>
#include <climits>
using namespace std;

void solve() {}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    vector<int> a(n);
    for (auto &x : a)
      cin >> x;

    long long ans = LONG_LONG_MAX;

    bool allTheSame = true;
    int i = 0;
    while (i < n && allTheSame) {
      if (a[i] != a[0]) {
        allTheSame = false;
      }
      i++;
    }

    if (allTheSame) {
      cout << 0 << '\n';
    } else {
      int l = 0, r = 0;

      while (r < n) {
        while (r < n - 1 && a[r + 1] == a[l])
          r++;
        ans = min(1LL * (long long)l * (long long)a[l] +
                      1LL * ((long long)(n - 1 - r) * (long long)a[r]),
                  ans);
        l = r = r + 1;
      }

      ans = min(ans, 1LL * (long long)(n - 1) * (long long)min(a[0], a[n - 1]));

      cout << ans << '\n';
    }
  }
}
