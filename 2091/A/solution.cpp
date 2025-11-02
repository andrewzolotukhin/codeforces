#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  unordered_map<int, int> freq;
  int found = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    freq[x]++;
    if (found == 0 && freq[0] >= 3 && freq[1] >= 1 && freq[2] >= 2 &&
        freq[3] >= 1 && freq[5] >= 1) {
      found = i + 1;
    }
  }
  cout << found << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
