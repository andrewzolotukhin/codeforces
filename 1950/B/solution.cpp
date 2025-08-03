#include <bits/stdc++.h>
using namespace std;

string print(bool color) {
  char c = color ? '#' : '.';
  return string(2, c);
}

void solve() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int k = i;
    string s = "";
    for (int j = 0; j < n; j++) {
      s += print((k + j) % 2 == 0);
    }
    cout << s << "\n";
    cout << s << "\n";
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
