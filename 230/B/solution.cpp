#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;
int main() {
  const int LIMIT = 1'000'000;
  vector<bool> primes(LIMIT + 1, false);
  for (int i = 2; i * i <= LIMIT; i++) {
    primes[i * i] = true;
    for (int j = i * i; j <= LIMIT; j += i) {
      primes[j] = true;
    }
  }
  unordered_set<long long> m;
  for (long long i = 2; i <= LIMIT; i++) {
    if (!primes[i]) {
      m.insert(i * i);
    }
  }
  int n;
  cin >> n;
  while (n--) {
    long long a;
    cin >> a;
    if (m.find(a) == m.end()) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
}
