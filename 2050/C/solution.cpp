#include <bits/stdc++.h>
using namespace std;

void solve() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;

    vector<int> digs = vector<int>(10);

    long long sum = 0;
    for (int i = 0; i < s.size(); i++) {
      sum += (long long)(s[i] - '0');
      if (s[i] > '1' && s[i] < '4') {
        digs[s[i] - '0']++;
      }
    }

    int diff = sum % 9;
    if (diff == 0) {
      cout << "YES" << '\n';
      continue;
    }

    bool found = false;

    int numsof2s = digs[2];
    int numsof3s = digs[3];

    for (int i = 0; i <= numsof2s; i++) {
      for (int j = 0; j <= numsof3s; j++) {
        if ((sum - i * 2 + i * 4 - j * 3 + j * 9) % 9 == 0) {
          found = true;
          break;
        }
      }
      if (found) {
        break;
      }
    }

    if (found) {
      cout << "YES" << '\n';
      continue;
    }

    cout << "NO" << '\n';
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
