#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n + 1);
  for (int i = 0; i < n; i++) {
    cin >> a[i + 1];
  }

  vector<bool> v(n + 1, false);
  v[0] = true;

  int c = 1;

  while (c != k && !v[c]) {
    v[c] = true;
    c = c + a[c];
  }

  cout << ((c == k) ? "YES\n" : "NO\n");
}
