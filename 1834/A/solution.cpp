#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int cnt = 0, cnt_ = 0;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    if (val == 1)
      cnt++;
    else
      cnt_++;
  }

  cout << max((cnt_ - cnt + 1) / 2, 0) +
              ((cnt_ - max((cnt_ - cnt + 1) / 2, 0)) % 2)
       << "\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
