#include <bits/stdc++.h>
using namespace std;

long long solve(long long a, long long b) {
  long long ans = a;

  long long generated = a / b;
  long long rem = generated > 0 ? a % b : 0;

  while (generated > 0) {
    ans += generated;
    rem += generated % b;
    generated = generated / b + rem / b;
    rem %= b;
  }

  return ans;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  long long a, b;
  cin >> a >> b;

  cout << solve(a, b) << '\n';
}
