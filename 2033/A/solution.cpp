#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  // bool f = false;
  // int c = 0;
  // int v = 0;
  // while (abs(v) <= n) {
  //   v += (f ? 1 : -1) * ((++c) * 2 - 1);
  //   f = !f;
  // }
  //
  // if (f) {
  //   cout << "Sakurako\n";
  // } else {
  //   cout << "Kosuke\n";
  // }
  //
  if (n % 2 == 0) {
    cout << "Sakurako\n";
  } else {
    cout << "Kosuke\n";
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;
  while (n--)
    solve();
}
