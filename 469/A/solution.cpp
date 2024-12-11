#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a, b;
  cin >> n;

  unordered_map<int, bool> mem;

  cin >> a;

  for (int i = 0; i < a; i++) {
    int k;
    cin >> k;
    mem.insert_or_assign(k, true);
  }

  cin >> b;

  for (int i = 0; i < b; i++) {
    int k;
    cin >> k;
    mem.insert_or_assign(k, true);
  }

  cout << (mem.size() == n ? "I become the guy." : "Oh, my keyboard!") << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
