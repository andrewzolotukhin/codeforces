#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int a, b, t;
  cin >> t;

  while (t--) {
    cin >> a >> b;
    cout << (b - a) << '\n';
  }
}
