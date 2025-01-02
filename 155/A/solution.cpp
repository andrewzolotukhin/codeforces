#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, s = 0;

  cin >> n;

  int a;
  cin >> a;
  n--;

  int max = a;
  int min = a;

  while (n--) {
    cin >> a;
    if (a < min) {
      min = a;
      s++;
    }

    if (a > max) {
      max = a;
      s++;
    }
  }

  cout << s << '\n';
}
