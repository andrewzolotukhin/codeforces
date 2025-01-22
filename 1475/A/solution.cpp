#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    long long n;
    cin >> n;

    if (n <= 2) {
      cout << "NO\n";
      continue;
    }

    cout << ((__builtin_popcountll(n) == 1) ? "NO" : "YES") << '\n';
  }
}
