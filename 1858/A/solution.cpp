#include <bits/stdc++.h>
using namespace std;

void solve(int a, int b, int c) {
  if (a + (c + 1) / 2 > b + c / 2) {
    cout << "First\n";
  } else {
    cout << "Second\n";
  }
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t, a, b, c;
  cin >> t;

  while (t--) {
    cin >> a >> b >> c;
    solve(a, b, c);
  }
}
