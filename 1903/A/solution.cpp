#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];

    if (k > 1) {
      cout << "YES\n";
      continue;
    }

    bool answered = false;
    for (int i = 1; i < n; i++) {
      if (a[i] < a[i - 1]) {
        cout << "NO\n";
        answered = true;
        break;
      }
    }
    if (!answered) {
      cout << "YES\n";
    }
  }
}
