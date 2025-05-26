#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    vector<int> a(3);
    for (auto &x : a) {
      cin >> x;
    }
    sort(a.begin(), a.end());
    cout << (abs(a[0] - a[1]) + abs(a[1] - a[2])) << '\n';
  }
}
