#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;

  auto comppr = [&](pair<int, int> a, pair<int, int> b) {
    return a.first > b.first;
  };

  priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(comppr)> pr(
      comppr);

  for (int i = 0; i < n; i++) {
    int p, q;
    cin >> p >> q;

    pr.push({p, q});
  }

  int maxQ = pr.top().second;

  while (!pr.empty()) {
    if (pr.top().second < maxQ) {
      cout << "Happy Alex\n";
      return 0;
    }
    // cout << pr.top().first << " " << pr.top().second << endl;
    maxQ = max(maxQ, pr.top().second);
    pr.pop();
  }
  cout << "Poor Alex\n";
}
