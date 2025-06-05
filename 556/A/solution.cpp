#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  string s;
  cin >> n >> s;

  int ones = 0, zeros = 0;
  for (int i = 0; i < n; i++) {
    ones += (s[i] == '1');
  }
  zeros = n - ones;

  cout << (max(ones, zeros) - min(ones, zeros)) << '\n';
}
