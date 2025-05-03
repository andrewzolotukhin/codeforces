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

    int l = 0, r = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == 'B') {
        l = i;
        r = i;
        break;
      }
    }

    for (int i = n - 1; i > l; i--) {
      if (s[i] == 'B') {
        r = i;
        break;
      }
    }

    cout << (r - l + 1) << '\n';
  }
}
