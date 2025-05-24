#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &v : a)
      cin >> v;

    int l = 0, r = n - 1;
    while (l <= r) {
      cout << a[l] << ' ';
      if (r > l)
        cout << a[r] << ' ';
      l++;
      r--;
    }
    cout << '\n';
  }
}
