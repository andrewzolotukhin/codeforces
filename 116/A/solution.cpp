#include <bits/stdc++.h>
using namespace std;

void solve() {
  int m = 0;
  int M = 0;
  int n;
  cin >> n;

  while (n--) {
    int i, o;

    cin >> o >> i;

    m -= o;
    m += i;
    if (m > M)
      M = m;
  }

  cout << M << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
