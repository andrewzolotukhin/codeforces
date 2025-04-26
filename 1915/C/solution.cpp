#include <bits/stdc++.h>
using namespace std;

long long issquare(long long n) {
  if (n < 0)
    return false;
  long long x = sqrt(n);
  return x * x == n;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    long long s = 0;
    while (n--) {
      int x;
      cin >> x;
      s += x;
    }

    cout << (issquare(s) ? "YES" : "NO") << '\n';
  }
}
