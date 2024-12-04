#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, r = 0;
  cin >> n;

  while (n--) {
    int a, b;
    cin >> a >> b;
    if (b - a >= 2) {
      r++;
    }
  }
  cout << r << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
