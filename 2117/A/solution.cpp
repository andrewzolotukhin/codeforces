#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);
    for (auto &v : a)
      cin >> v;

    bool used = false;
    bool good = false;
    int i = 0;
    while (i < n) {
      if (a[i] == 0) {
        i++;
        if (i == n)
          good = true;
      } else {
        if (used)
          break;
        used = true;
        i += x;
        if (i >= n)
          good = true;
      }
    }
    if (good) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
