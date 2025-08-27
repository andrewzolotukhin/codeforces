#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  unordered_map<string, string> mp;
  for (int i = 0; i < m; i++) {
    string s1, s2;
    cin >> s1 >> s2;
    mp[s1] = s2;
  }

  string ans = "";

  while (n--) {
    string w;
    cin >> w;
    if (ans.size())
      ans += ' ';
    if (w.size() > mp[w].size()) {
      ans += mp[w];
    } else {
      ans += w;
    }
  }

  cout << ans << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
