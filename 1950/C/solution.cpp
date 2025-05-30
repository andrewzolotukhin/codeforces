#include <bits/stdc++.h>
using namespace std;

void solve(int h, int m) {
  int nh = h % 12;
  if (nh == 0)
    nh = 12;
  printf("%02d:%02d", nh, m);
  printf(" %s\n", (h < 12) ? "AM" : "PM");
}

int main() {
  int t;
  cin >> t;

  while (t--) {
    int h, m;

    scanf("%02d:%02d", &h, &m);

    solve(h, m);
  }
}
