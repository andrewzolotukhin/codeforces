#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s;
  cin >> s;
  vector<int> freq(3, 0);

  for (const char &c : s) {
    freq[c - 'A']++;
  }
  if (freq[0] + freq[2] == freq[1]) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
