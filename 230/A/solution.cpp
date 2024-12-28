#include <bits/stdc++.h>

using namespace std;

int main() {
  int s, n;
  cin >> s >> n;
  vector<pair<int, int>> a;
  while (n--) {
    int p1, p2;
    cin >> p1 >> p2;
    a.push_back({p1, p2});
  }

  sort(a.begin(), a.end(), [&](pair<int, int> n1, pair<int, int> n2) {
    if (n1.first == n2.first) {
      return n1.second > n2.second;
    }
    return n1.first < n2.first;
  });

  for (auto p : a) {
    if (s <= p.first) {
      cout << "NO\n";
      return 0;
    }
    s += p.second;
  }
  cout << "YES\n";
}
