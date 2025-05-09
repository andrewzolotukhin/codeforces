#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    int n = s.size() - 2;

    if (n == 0) {
      cout << "i\n";
      continue;
    }

    cout << s.substr(0, n) << "i\n";
  }
}
