#include <bits/stdc++.h>
using namespace std;

void solve() {}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    if (s.size() == 2) {
      cout << s << '\n';
    } else {
      for (int i = 0; i < s.size(); i += 2) {
        cout << s[i];
      }
      if (s.size() % 2 == 0) {
        cout << s[s.size() - 1];
      }
      cout << '\n';
    }
  }
}
