#include <bits/stdc++.h>
using namespace std;

long long powmod(long long base, long long pow, long long mod) {
  long long ans = 1;

  auto b = base;

  while (pow) {
    if (pow & 1) {
      ans = (ans * b) % mod;
    }
    b = (b * b) % mod;
    pow /= 2;
  }

  return ans % mod;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  long long n;
  cin >> n;
  auto mod2 = powmod(1378, n, 2);
  auto mod5 = powmod(1378, n, 5);
  long long mod10 = (mod2 * 5 + mod5 * 6) % 10;
  cout << mod10 << '\n';
}
