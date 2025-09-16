#include <bits/stdc++.h>
using namespace std;
int a[10000005];
int main() {
  long long n, ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> a[i];
  for (int i = 1; i <= n; i++) {
    long long temp = a[i], t = 1;
    while (temp != -1) {
      t++;
      temp = a[temp];
    }
    ans = max(ans, t);
  }
  cout << ans;
}
