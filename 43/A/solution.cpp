#include <bits/stdc++.h>
using namespace std;

void solve() {}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;

  map<string, int> m;

  string s;
  while (n--) {
    cin >> s;
    m[s]++;
  }

  string mx;
  int max = 0;

  for (auto [l, c] : m) {
    if (c > max) {
      max = c;
      mx = l;
    }
  }

  cout << mx;
}
