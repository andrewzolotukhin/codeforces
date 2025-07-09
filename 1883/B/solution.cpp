#include <bits/stdc++.h>
using namespace std;

bool solve() {
  vector<int> freq(26, 0);
  int n, k;
  string s;
  cin >> n >> k >> s;
  for (char c : s) {
    freq[c - 'a']++;
  }

  int a = 0;
  for (int i = 0; i < 26; i++) {
    if (freq[i] & 1) {
      a++;
    }
  }

  return a <= k + 1;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    cout << (solve() ? "YES" : "NO") << '\n';
  }
}
