#include <bits/stdc++.h>
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

    int k = n * 2;

    int p = 0;

    while (k--) {
      int x;
      cin >> x;
      if (x & 1)
        p++;
    }

    cout << ((p == n) ? "Yes" : "No") << '\n';
  }
}
