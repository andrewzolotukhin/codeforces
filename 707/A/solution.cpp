#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n >> m;

  bool isColor = true;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      char c;
      cin >> c;
      if (c != 'W' && c != 'B' && c != 'G') {
        isColor = false;
      }
    }
  }

  cout << (isColor ? "#Black&White" : "#Color") << endl;
}
