#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  unordered_map<int, int> freq;
  while (n--) {
    int x;
    cin >> x;
    freq[x]++;
  }

  int ans = freq.size();
  int rest = 0;
  for (auto &[key, value] : freq) {
    rest += value - 1;
  }

  if (rest % 2 == 1) {
    ans--;
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
