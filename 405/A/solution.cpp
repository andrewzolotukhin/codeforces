#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  vector<int> nums;

  cin >> n;
  while (n--) {
    int k;
    cin >> k;
    nums.push_back(k);
  }

  sort(nums.begin(), nums.end());

  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i];
    if (i < nums.size() - 1) {
      cout << " ";
    }
  }

  cout << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
