#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;
void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (auto &v : a)
    cin >> v;
  unordered_set<int> m;

  for (auto &v : a) {
    if (m.size()) {
      if (!(m.count(v - 1) || m.count(v + 1))) {
        cout << "NO\n";
        return;
      }
    }
    m.insert(v);
  }
  cout << "YES\n";
}

int main() {
  int t;
  cin >> t;
  while (t--)
    solve();
}
