#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n;
    string s;

    cin >> n >> s;

    int c = 0;

    int l = 0, r = n - 1;

    while (l < r &&
           ((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))) {
      c++;
      l++;
      r--;
    }

    cout << n - c * 2 << '\n';
  }
}
