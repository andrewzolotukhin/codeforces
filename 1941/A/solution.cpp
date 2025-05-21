#include <bits/stdc++.h>
using namespace std;

void solve() {}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;

  cin >> t;

  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> nums1(n), nums2(m);

    for (int i = 0; i < n; i++)
      cin >> nums1[i];
    for (int i = 0; i < m; i++)
      cin >> nums2[i];

    int ans = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (nums1[i] + nums2[j] <= k) {
          ans++;
        }
      }
    }

    cout << ans << '\n';
  }
}
