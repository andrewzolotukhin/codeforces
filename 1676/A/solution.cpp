#include <iostream>
using namespace std;

int main() {
  int t, n, a = 0, b = 0;
  cin >> t;
  while (t--) {
    cin >> n;
    a = (n) % 10 + (n / 10) % 10 + (n / 100) % 10;
    b = (n / 1000) % 10 + (n / 10000) % 10 + (n / 100000) % 10;
    cout << (a == b ? "YES" : "NO") << '\n';
  }
}
