#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n;
  cin >> n;

  int ans = 1;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0)
      ans++;
  }

  cout << ans << '\n';
}
