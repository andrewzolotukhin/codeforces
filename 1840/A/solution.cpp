#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  string ans = "";

  int i = 0;
  while (i < n) {
    ans.push_back(s[i]);
    char c = s[i++];
    while (s[i] != c)
      i++;
    i++;
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
