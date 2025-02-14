#include <bits/stdc++.h>
using namespace std;

long long solve(long long n) {
  long long result = 0;

  vector<int> digits;

  while (n > 0) {
    int digit = n % 10;
    digits.push_back(digit);
    n /= 10;
  }

  for (int i = digits.size() - 1; i >= 0; i--) {
    int d = digits[i];
    d = 9 - d;

    result = result * 10 +
             (long long)min(
                 digits[i],
                 (i == digits.size() - 1 && digits[i] == 9) ? digits[i] : d);
  }

  return result;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  long long n;
  cin >> n;

  cout << solve(n) << '\n';
}
