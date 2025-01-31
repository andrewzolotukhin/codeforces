#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int n, p1 = 0, p2 = 0, p3 = 0;
  vector<int> t1, t2, t3;
  cin >> n;

  for (int i = 0; i < n; i++) {

    int x;
    cin >> x;
    if (x == 1) {
      p1++;
      t1.push_back(i + 1);
    } else if (x == 2) {
      p2++;
      t2.push_back(i + 1);
    } else {
      p3++;
      t3.push_back(i + 1);
    }
  }

  int m = min(p1, min(p2, p3));

  cout << m << '\n';

  for (int i = 0; i < m; i++) {
    cout << t1[i] << ' ' << t2[i] << ' ' << t3[i] << '\n';
  }
}
