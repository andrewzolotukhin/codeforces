#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &a, vector<int> &b, int k) {
  sort(b.begin(), b.end(), greater<int>());

  priority_queue<int, vector<int>> pq;

  for (auto e : a)
    pq.push(e);
  for (int i = 0; i < min(k, (int)b.size()); i++) {
    pq.push(b[i]);
  }

  int ans = 0;
  for (int i = 0; i < a.size(); i++) {
    ans += pq.top();
    pq.pop();
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);

    for (auto &ai : a)
      cin >> ai;
    for (auto &bi : b)
      cin >> bi;

    cout << solve(a, b, k) << '\n';
  }
}
