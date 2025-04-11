#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  string s;
  cin >> s;

  int ans = 0;

  char pos = 'a';

  for (int i = 0; i < s.size(); i++) {
    int r = (pos - s[i] + 26) % 26;
    int l = 26 - r;
    ans += min(r, l);
    pos = s[i];
  }

  cout << ans << '\n';
}
