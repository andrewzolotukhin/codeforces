#include <bits/stdc++.h>
using namespace std;

int solve(string &s) {
  vector<int> cnt(26, 0);

  int result = 0;

  for (char c : s) {
    if (cnt[c - 'A'] == 0) {
      result++;
    }

    cnt[c - 'A']++;
    result++;
  }

  return result;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    string s;
    cin >> n >> s;

    cout << solve(s) << '\n';
  }
}
