#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    vector<string> strs(8);
    for (auto &s : strs)
      cin >> s;

    int startX = -1, startY;
    string ans = "";
    for (int i = 0; i < 8; i++) {
      if (startX != -1)
        break;
      for (int j = 0; j < 8; j++) {
        if (strs[i][j] != '.') {
          startX = i;
          startY = j;
          break;
        }
      }
    }

    while (startX < 8 && strs[startX][startY] != '.') {
      ans += strs[startX++][startY];
    }

    cout << ans << '\n';
  }
}
