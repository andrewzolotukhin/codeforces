#include <iostream>
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int r = 0;
    if (b > a)
      r++;
    if (c > a)
      r++;
    if (d > a)
      r++;
    cout << r << '\n';
  }
}
