#include <bits/stdc++.h>
using namespace std;

long long sqrtll(long long x) {
  long long val = sqrtl(x) + 1;
  while (val * val > x)
    val--;
  return val;
}

long long solve(vector<pair<long long, long long>> &nums, int m) {
  long long result = 0LL;

  int n = nums.size();

  map<long long, long long> cnt;

  for (int i = 0; i < n; i++) {
    long long x = nums[i].first;
    long long r = nums[i].second;

    for (int j = x - r; j <= x + r; j++) {
      // dist((j, y), (x, 0)) = r
      // r^2 = (j - x)^2 + y^2
      // y = sqrt(r^2 - (j - x)^2)
      long long c = 2 * sqrtll(r * r - (j - x) * 1LL * (j - x)) + 1;
      cnt[j] = max(cnt[j], c);
    }
  }

  for (auto [x, r] : cnt) {
    result += r;
  }

  return result;
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;

    vector<pair<long long, long long>> nums;

    vector<long long> centers(n);
    vector<long long> radiuses(n);

    for (auto &c : centers) {
      cin >> c;
    }

    for (auto &r : radiuses) {
      cin >> r;
    }

    for (int i = 0; i < n; i++) {
      nums.push_back({centers[i], radiuses[i]});
    }

    cout << solve(nums, m) << '\n';
  }
}
