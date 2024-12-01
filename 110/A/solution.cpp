#include <bits/stdc++.h>
using namespace std;

void solve() {
  unsigned long long n;
  cin >> n;

  int s = 0;

  while (n > 0) {
    if (n % 10 == 4 || n % 10 == 7)
      s++;
    n /= 10;
  }

  if (s == 0) {
    cout << "NO" << endl;
    return;
  }

  while (s > 0) {
    if (s % 10 == 4 || s % 10 == 7) {
      s /= 10;
      continue;
    }
    cout << "NO" << endl;
    return;
  }

  cout << "YES" << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
