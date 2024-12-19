#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> nums = vector<int>(5, 0);
  while (n--) {
    int k;
    cin >> k;
    nums[k]++;
  }

  int answer = nums[4];

  answer += nums[3];
  if (nums[1] >= nums[3]) {
    nums[1] -= nums[3];
  } else {
    nums[1] = 0;
  }

  answer += (nums[2] * 2) / 4;

  answer += (((nums[2] * 2) % 4) + nums[1]) / 4;
  if ((((nums[2] * 2) % 4) + nums[1]) % 4)
    answer++;

  cout << answer << '\n';
}

int main() {
  cin.tie(0)->sync_with_stdio(0);
  cin.exceptions(cin.failbit);

  solve();
}
