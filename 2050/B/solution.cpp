#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    long long s1 = 0, s2 = 0;
    int c1 = 0, c2 = 0;
    for (int i = 0; i < n; i++) {
      long long t;
      cin >> t;
      if (i & 1) {
        s2 += t;
        c2++;
      } else {
        s1 += t;
        c1++;
      }
    }
    cout << (((s1 + s2) % n == 0) && (s1 / c1 == s2 / c2) ? "YES" : "NO")
         << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
