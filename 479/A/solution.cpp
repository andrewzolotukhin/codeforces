#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c;

  cin >> a >> b >> c;

  vector<int> res;

  res.push_back(a + b + c);
  res.push_back(a * b * c);

  res.push_back((a + b) * c);
  res.push_back(a * (b + c));

  res.push_back(a * b + c);
  res.push_back(a + b * c);

  int max = res[0];
  for (int i = 0; i < res.size(); i++) {
    if (res[i] > max)
      max = res[i];
  }

  cout << max << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
