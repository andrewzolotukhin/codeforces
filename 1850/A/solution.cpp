#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b >= 10 || a + c >= 10 || b + c >= 10) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
