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

    cout << ((s == "abc" || s == "acb" || s == "bac" || s == "cba") ? "YES"
                                                                    : "NO")
         << '\n';
  }
}
