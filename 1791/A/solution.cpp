#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    char c;
    cin >> c;

    cout << (c == 'c' || c == 'o' || c == 'd' || c == 'e' || c == 'f' ||
                     c == 'r' || c == 's'
                 ? "YES"
                 : "NO")
         << '\n';
  }
}
