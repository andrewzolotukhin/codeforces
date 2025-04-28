#include <bits/stdc++.h>
using namespace std;

void solve(int a) {
  // a = 180*(n-2)/n
  // na = 180n - 360
  // na - 180n = - 360
  // n(a-180) = - 360
  // n = -360/(a-180)

  if (-360 % (a - 180) != 0) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int a;
    cin >> a;
    solve(a);
  }
}
