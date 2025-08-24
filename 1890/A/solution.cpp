#include <bits/stdc++.h>
using namespace std;

void solve() {
  map<int, int> e;

  int n;
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    e[x]++;
  }
  if (e.size() >= 3)
    puts("No");
  else {
    if (abs(e.begin()->second - e.rbegin()->second) <= 1) {
      puts("Yes");
    } else {
      puts("No");
    }
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
