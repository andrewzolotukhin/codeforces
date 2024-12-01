#include <bits/stdc++.h>
using namespace std;

void swap(string &s, int f, int t) {
  char c = s[f];
  s[f] = s[t];
  s[t] = c;
}

void solve() {
  string s;
  int n, k;
  cin >> k >> n;
  cin >> s;

  while (n--) {
    for (int i = 0; i < k - 1; i++) {
      if ((s[i] == 'B') && (s[i + 1] == 'G')) {
        swap(s, i, i + 1);
        i++;
      }
      // cout << i << " - " << s << endl;
    }
  }

  cout << s << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
