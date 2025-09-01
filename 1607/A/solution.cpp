#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  string k;
  cin >> k >> s;

  unordered_map<char, int> pos;
  for (int i = 0; i < k.size(); i++) {
    pos[k[i]] = i;
  }

  int ans = 0;
  for (int i = 1; i < s.size(); i++) {
    ans += abs(pos[s[i]] - pos[s[i - 1]]);
  }
  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
