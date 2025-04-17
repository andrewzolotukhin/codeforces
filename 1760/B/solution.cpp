#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    int m = 0;

    for (int i = 0; i < n; i++) {
      m = max(m, s[i] - 'a');
    }

    cout << (m + 1) << '\n';
  }
}
