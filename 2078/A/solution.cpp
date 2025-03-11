#include <bits/stdc++.h>
using namespace std;

int avg(vector<int> &a) {
  int acc = 0;
  for (auto e : a) {
    acc += e;
  }

  if (acc % a.size() != 0)
    return -1;
  return acc / a.size();
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, x;
    cin >> n >> x;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    cout << ((avg(a) == x) ? "YES" : "NO") << '\n';
  }
}
