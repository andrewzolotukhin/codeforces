#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;
  cin >> t;

  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> lengths;

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      lengths.push_back(s.size());
    }

    int t = 0;
    int res = 0;
    for (int i = 0; i < n; i++) {
      if (t + lengths[i] <= m) {
        t += lengths[i];
        res++;
      } else {
        break;
      }
    }

    cout << res << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
