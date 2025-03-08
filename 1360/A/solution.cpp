#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int a, b;
    cin >> a >> b;

    int h1;
    if (2 * a <= b) {
      h1 = b * b;
    } else {
      h1 = 4 * a * a;
    }

    int h2;
    if (2 * b <= a) {
      h2 = a * a;
    } else {
      h2 = 4 * b * b;
    }

    cout << min(h1, h2) << '\n';
  }
  return 0;
}
