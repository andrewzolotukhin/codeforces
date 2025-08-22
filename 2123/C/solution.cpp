#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;
  vector<int> l(n, -1), r(n, -1);
  stack<int> s;

  for (int i = n - 1; i >= 0; i--) {
    while (!s.empty() && a[s.top()] <= a[i]) {
      s.pop();
    }
    if (!s.empty()) {
      r[i] = s.top();
    }
    s.push(i);
  }
  s = stack<int>();

  for (int i = 0; i < n; i++) {
    while (!s.empty() && a[s.top()] > a[i]) {
      s.pop();
    }
    if (!s.empty()) {
      l[i] = s.top();
    }
    s.push(i);
  }

  // for (auto ll : l) {
  //   cout << ll << ' ';
  // }
  // cout << '\n';
  // for (auto rr : r) {
  //   cout << rr << ' ';
  // }

  for (int i = 0; i < n; i++) {
    if (r[i] == -1 || l[i] == -1) {
      cout << 1;
    } else {
      cout << 0;
    }
  }
  cout << '\n';
}

void solve2() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &x : a)
    cin >> x;

  int minV = INT_MAX, minI = 0;
  int maxV = INT_MIN, maxI = 0;

  for (int i = 0; i < n; i++) {
    if (a[i] < minV) {
      minV = a[i];
      minI = i;
    }
    if (a[i] > maxV) {
      maxV = a[i];
      maxI = i;
    }
  }

  for (int i = 0; i < n; i++) {
    if (a[i] == minV || a[i] == maxV) {
      cout << 1;
      continue;
    }

    if ((minI < i && maxI < i) || (minI > i && maxI > i)) {
      cout << 1;
      continue;
    }

    if ((maxI < i && minI > i)) {
      cout << 1;
      continue;
    }

    cout << 0;
  }

  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
