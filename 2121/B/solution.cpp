#include <bits/stdc++.h>
using namespace std;

void solve(string &s) {
  int n = s.size();
  vector<int> cnt(26, 0);
  for (char c : s) {
    cnt[c - 'a']++;
  }

  bool ok = false;
  for (int i = 1; i < n - 1; i++) {
    if (cnt[s[i] - 'a'] > 1) {
      ok = true;
      break;
    }
  }

  cout << (ok ? "Yes" : "No") << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    solve(s);
  }
}
