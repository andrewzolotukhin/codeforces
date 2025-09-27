#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  n--;
  int acc = 0;
  while (n--) {
    int x;
    cin >> x;
    acc += x;
  }

  cout << (-acc) << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--)
    solve();
}
