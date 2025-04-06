#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  vector<long long> p(50);
  for (int i = 1; i <= p.size(); i++) {
    p[i - 1] = (1LL << (i + 1)) - 1;
  }

  while (t--) {
    long long n;
    cin >> n;

    for (int i = 0; i < p.size(); i++) {
      if (n % p[i] == 0) {
        cout << (n / p[i]) << '\n';
        break;
      }
    }
  }
}
