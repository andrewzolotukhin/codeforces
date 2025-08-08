#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;

  long long sum1 = (1LL << n), sum2 = 0;
  for (int i = 1; i < n / 2; i++)
    sum1 += (1LL << i);
  for (int i = n / 2; i < n; i++)
    sum2 += (1LL << i);
  cout << sum1 - sum2 << endl;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
