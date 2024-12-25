#include <bits/stdc++.h>
using namespace std;

long long fact(long long n, int mod) {
  if (n > mod)
    return 0;
  if (n == 0)
    return 1;
  return ((n % mod) * fact(n - 1, mod)) % mod;
}

int factorialMod6(int n) {
  if (n == 0 || n == 1)
    return 1;
  if (n == 2)
    return 2;
  if (n == 3)
    return 0;
  return 0;
}

bool isDivisibleBy7(int D, int n) {
  if (n >= 6) {
    return true;
  }
  int factMod6 = factorialMod6(n);

  int cycle[] = {3, 2, 6, 4, 5, 1};
  int remainder = cycle[factMod6 - 1]; // factMod6 от 1 до 6

  return (remainder * D) % 7 == 0;
}

void solve(int n, int d) {
  cout << 1;

  long long k3 = fact((long long)n, 3);
  long long k7 = fact((long long)n, 7);
  long long k9 = fact((long long)n, 9);

  if ((k3 * d) % 3 == 0) {
    cout << " 3";
  }

  if (n >= 1 && (d == 5 || d == 0)) {
    cout << " 5";
  }

  if (isDivisibleBy7(d, n)) {
    cout << " 7";
  }

  if ((k9 * d) % 9 == 0) {
    cout << " 9";
  }
  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;

  while (t--) {
    int n, d;
    cin >> n >> d;
    solve(n, d);
  }
}
