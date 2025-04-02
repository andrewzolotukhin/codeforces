#include <bits/stdc++.h>
using namespace std;

int solve(priority_queue<int, vector<int>, greater<>> &a,
          priority_queue<int, vector<int>, greater<>> &b) {
  int ans = 0;

  while (!a.empty() && !b.empty()) {
    // cout << a.top() << ' ' << b.top() << '\n';
    if (abs(a.top() - b.top()) <= 1) {
      ans++;
      a.pop();
      b.pop();
      continue;
    }

    if (a.top() < b.top()) {
      a.pop();
    } else {
      b.pop();
    }
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, m;
  cin >> n;
  priority_queue<int, vector<int>, greater<>> a, b;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    a.push(x);
  }
  cin >> m;
  for (int i = 0; i < m; i++) {
    int x;
    cin >> x;
    b.push(x);
  }

  cout << solve(a, b) << '\n';
}
