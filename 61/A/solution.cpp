#include <bits/stdc++.h>
using namespace std;

void solve() {
  string s1, s2;
  cin >> s1 >> s2;

  for (int i = 0; i < s1.size(); i++) {
    cout << ((s1[i] ^ s2[i]) ? '1' : '0');
  }
  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}