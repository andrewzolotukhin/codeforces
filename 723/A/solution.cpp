#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int i = min(a, min(b, c));
  int j = max(a, max(b, c));

  cout << (j - i) << '\n';
}
