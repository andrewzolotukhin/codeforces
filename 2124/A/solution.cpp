#include <bits/stdc++.h>
using namespace std;
const int N = 105;
int a[N];

void solve() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int f = 0;
  for (int i = 1; i < n; i++) {
    if (a[i] > a[i + 1]) {
      f = i;
      break;
    }
  }
  if (f) {
    cout << "YES" << endl;
    cout << 2 << endl;
    cout << a[f] << " " << a[f + 1] << endl;
  } else {
    cout << "NO" << endl;
  }
  return;
}

int main() {

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
